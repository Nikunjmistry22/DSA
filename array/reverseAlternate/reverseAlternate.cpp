//reverse alternate elements of array
#include<bits/stdc++.h>
using namespace std;

void reverseAlternate(int a[],int n)
{
    for(int i=0;i<n;i+=2){
            if(i+1<n){
        swap(a[i],a[i+1]);
        }
    }


}

int main()
{
    int a[7]={2,8,-2,4,7,25,-5};
    reverseAlternate(a,7);

    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
}
