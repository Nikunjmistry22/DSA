#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string ans){
        int i=0,j=ans.length()-1;
        while(i<=j){
            if(ans[i]!=ans[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
int main()
{
    string s="babad";
    string ans;
    string result="";
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                for(int k=i;k<=j;k++){
                    ans+=s[k];
                }
                if(ispalindrome(ans)){
                if(result.length()<ans.length())
                result=ans;
                }
                ans="";
            }

        }
        cout<<result;
}

