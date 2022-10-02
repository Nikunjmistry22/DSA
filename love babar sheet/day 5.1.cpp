//subsequence of a string
#include<bits/stdc++.h>
using namespace std;

void solve(string str,vector<string>&ans,string output,int index)
{
    //base case
    if(index>=str.length()){
        ans.push_back(output);
        return;
    }
    //exclude
    solve(str,ans,output,index+1);
    //include
    char element=str[index];
    output+=element;
    solve(str,ans,output,index+1);

}

int main()
{
    string str="abc";
    vector<string> ans;
    int index=0;
    string output="";
    solve(str,ans,output,index);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
