#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[7]={3,-1,4,7,9,10,1};
    int n=7;
    /*Linear search
    Time Complexity: O(n square)
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }*/

    /*Insertion Sort   Card Selection
    for(int i=1;i<n;i++){
            int temp=a[i];
            int j=i-1;
        for(;j>=0;j--){
            if(a[j]>temp){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j+1]=temp;
    }

    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }*/

    /*Bubble Sort
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }*/

}

