#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={-1,4,7,-2,8};
    int sum=0;
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
                for(int k=i;k<=j;k++){
                            sum+=a[k];
                }
        cout<<sum<<endl;
        sum=0;
        }
    }
}
