#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> a;
    string s="({[]})";
    for(int i=0;i<s.length()-1;i++){
        if(s[i]=='{'||s[i]=='['|| s[i]=='('){
            a.push(s[i]);
           }
        if(s[i]=='}'||s[i]==']'|| s[i]==')')
        {
            if(a.top()==s[i]){
                a.pop();
                continue;
            }else
            a.push(s[i]);

        }
    }
    if(a.empty()){
        cout<<"Valid"<<endl;
    }
    cout<<"Invalid"<<endl;

}
