//move all negative element to one side
//logic put i=-1 and compare the array element with a variable if less than zero than i increment by 1 and swap the i and j position of array
//optimal
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,-3,4,12,-9,-5,7};
    int i=-1;
    int pivot=0;
    for(int j=0;j<sizeof(a)/sizeof(a[0]);j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    for(int k=0;k<sizeof(a)/sizeof(a[0]);k++){
        cout<<a[k]<<" ";
    }
}
