// find max and min of an array
//not optimal
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,8,4,-3,7};
    int max=a[0];

    int length=sizeof(a)/sizeof(a[0])-1;
    for(int i=1;i<=length;i++){
        if(max>a[i]){
            i++;
        }max=a[i];
    }*/
    int min=a[0];
    for(int i=1;i<=sizeof(a)/sizeof(a[0])-1;i++){
        if(min<a[i]){
            i++;
        }min=a[i];
    }

    cout<<max<<" "<<min;
}
