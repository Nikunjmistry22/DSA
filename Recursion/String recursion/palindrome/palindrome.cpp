//check whether string is palindrome or not
#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s,int l,int r){
if(l>=r){
    return true;
}
if(s[l]!=s[r]){
    return false;
}
return(palindrome(s,l+1,r-1));
}

int main()
{
    cout<<palindrome('abba',0,3);
}
