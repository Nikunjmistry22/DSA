//reverse a string
#include<iostream>
using namespace std;
int main()
{
    string s="Nikunj";
    int first=0;
    int last=s.length()-1;
    while(first<last){
        swap(s[first],s[last]);
        first++;
        last--;
    }
    cout<<s;
}
