/*
*********************************************************************************************************************
                To find the only non repeating number in an array where every elemnt is repeated twice.
********************************************************************************************************************* */

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll n;cin>>n;
    ll a[n];
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    ll res=0;
    for(ll j=1;j<=n;j++){
        res=res^a[j];
    }
    cout<<res;

}
