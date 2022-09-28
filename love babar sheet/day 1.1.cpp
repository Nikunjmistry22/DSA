//reverse an array using two pointer method.
//optimal
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,5,9,4,8};
    int first=0;
    int last=sizeof(a)/sizeof(a[0])-1;
    while(first<last){
        swap(a[first],a[last]);
        first++;
        last--;
    }
    for(int i=0;i<=sizeof(a)/sizeof(a[0])-1;i++){
        cout<<a[i]<<" ";
    }
}
