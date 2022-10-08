#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="nikunj";
    stack<char>a;
    string ans="";
    for(int i=0;i<s.length();i++){
        a.push(s[i]);
    }
    while(a.empty()==0){
        ans+=a.top();
        a.pop();
    }
    cout<<ans;
}
