//unique elements
/*
one approach is brute force. --> comparatively worst t(o)
second approach is xor property --> best time complexity

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[7]={4,8,3,4,3,7,8};
    int res=0;
    for(int i=0;i<7;i++){
        res=res^a[i];
    }
    cout<<res<<endl;
}

