
#include<bits/stdc++.h>
using namespace std;

int greater_element(int n){
        int sum=0;
        while(n>0){
            int a=n%10;
            sum=sum*10+a;
            n/=10;
        }
        if(sum>n)
            return sum;
        else {
            return -1;}
}
int main()
{
    cout<<greater_element(21);
}
