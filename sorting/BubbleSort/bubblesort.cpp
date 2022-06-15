#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void swap(ll a[],ll i,ll j){
ll temp=a[i];
a[i]=a[j];
a[j]=temp;
}

int main()
{
    ll a[5]={4,8,3,7,10};
    ll n=7;
    for(ll i=0;i<n-1;i++){
            bool swapped=false;
        for(ll j=0;j<n-i-1;j++){
            if(a[j+1]<a[j]){
                swapped=true;
                swap(a,j+1,j);
            }
        }
    if(!swapped){
        break;
    }
    }
    for(ll k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
}
