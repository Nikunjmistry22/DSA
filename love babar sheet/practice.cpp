#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={5,1,-2,-1,2};//-2 -1 1 2 5
    int n=5,i,j;
    int count=0,sum=2;
    sort(a,a+n);
    for(int k=0;k<n;k++){
        i=k+1;
        j=n-1;
        while(j>i){
            if(a[i]+a[j]==sum-a[k]){
                cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                count++;
                i++;
            }
            else{
                j--;
            }
        }
    }
    cout<<count;
}
