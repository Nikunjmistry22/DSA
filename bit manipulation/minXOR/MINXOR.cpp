#include<bits/stdc++.h>
using namespace std;

int findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int ans=1000000000;
    for(int i=0;i<A.size()-1;i++)
    ans=min(ans,A[i]^A[i+1]);
    return ans;
}
