//find all the element in pair of 2 whose sum is equal to target.
//not optimal
//for optimal hashmap
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,8,9,3,4};
    int target=12;
    int length=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<length;i++){
        for(int j=0;j<i+1;j++){
            if(a[i]+a[j]==target){
                    cout<<a[i]<<" "<<a[j]<<endl;
            }else{
            cout<<-1<<endl;}
        }
    }

}
