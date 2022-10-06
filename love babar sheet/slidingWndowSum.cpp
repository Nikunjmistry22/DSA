//Brute force
//Sliding Window Sum of 3 array size
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[9]={1,2,4,8,5,6,9,7,3};
    int max=INT_MIN;
    int sum=0;
    for(int i=0;i<9;i++){
        for(int j=i;j<i+3 &&j<9;j++){
        }
        sum+=a[i]+a[i+1]+a[i+2];
        if(max<sum){
            max=sum;
        }
        sum=0;
    }
    cout<<max;
}
