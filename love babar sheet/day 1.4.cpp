// cyclic rotation of array k times
//optimal
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,5,2,4};
    int last=(sizeof(a)/sizeof(a[0])-1);
    int count=last+1;
    while(count--){
    int l=a[last];
    for(int i=last;i>0;i--){
        a[i]=a[i-1];
        }
    a[0]=l;
    }
    for(int k=0;k<=sizeof(a)/sizeof(a[0])-1;k++){
        cout<<a[k]<<" ";
    }
}
