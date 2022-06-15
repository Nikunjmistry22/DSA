//selection sort
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void swap(ll a[],ll min,ll i ){
ll temp =a[min];
a[min]=a[i];
a[i]=temp;
}

int main()
{
    ll a[7]={5,1,7,9,2,6,4};
    ll n=7;
    for(ll i=0;i<n-1;i++){
        ll min=i;
        for(ll j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(a,min,i);
        }
    }
    for(ll k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
}
