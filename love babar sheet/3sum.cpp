#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6]={-1,2,8,4,6,-3};
    int target=20;
    bool found=false;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                if(a[i]+a[j]+a[k]==target){
                        found=true;
                }
            }
        }
    }
    cout<<found<<endl;
}
