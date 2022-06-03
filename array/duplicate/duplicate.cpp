//Find duplicate in array
/*
count method --> brute force --> not a good sol
xor method -->optimized T(o)
*/
#include<bits/stdc++.h>
using namespace std;

int duplicate(int a[],int n)
{
    int res=0;
    for(int i=0;i<n;i++){
        res=res^a[i];
    }
    for(int i=1;i<n;i++){
        res=res^i;
    }
    return res;
}
int main()
{
    int a[5]={1,2,2,3,4};
    cout<<duplicate(a,5);
}
