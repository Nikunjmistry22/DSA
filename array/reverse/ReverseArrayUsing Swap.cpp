
//Reverse the array using swap
#include<bits/stdc++.h>
using namespace std;

void rev(int a[],int n){
int start=0;
int end=n-1;

while(start<=end)
    {
        int temp;
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        //or using standard library swap(a[start],a[end]
        start++;
        end--;
    }
}
int main()
{
    int a[5]={2,39,-4,7,15};

    rev(a,5);
    //print array
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}
