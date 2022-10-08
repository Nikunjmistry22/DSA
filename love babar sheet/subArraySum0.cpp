//Time complexity O(n)
//Space Complexity O(n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={4,2,-3,1,6};
    int n=5;
    bool found=false;
        int sum=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            sum=sum+a[i];
            if(sum==0|| m[sum]||a[i]==0){
                found=true;
                break;
            }else{
                m[sum]=1;
            }
        }
    cout<<found;
}

//Naive Solution
//Time Complexity O(n cube) or O(n square)
//Space Complexity o(1)
