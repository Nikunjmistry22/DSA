//to check whether string is palindrome or not
#include<iostream>
using namespace std;
int ispalindrome(string s)
{
    int first=0;
    int last=s.length()-1;
    while(first<last){
        if(s[first]!=s[last]){
            return 0;
        }
        first++;
        last--;
    }
        return 1;
}
int main()
{
    cout<<ispalindrome("radim");
}
