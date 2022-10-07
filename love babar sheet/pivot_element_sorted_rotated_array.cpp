#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={10,15,24,38,9};
    int s=0,e=5;
    int result;
    while(s<e){
        int mid=s+(e-s)/2;
        if(a[s]<=a[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<result;
}
