/*
Count the no of ways in which a man can reach to its last destination ie n,m
from beginning 1,1
man can move only right and only left no diagonal
*/
#include<bits/stdc++.h>
using namespace std;

int count(int n,int m)
{
    if(n==1||m==1){
        return 1;
    }
    return count(n-1,m)+count(n,m-1);
}

int main()
{
    cout<<count(2,2)<<endl;
    cout<<count(3,3)<<endl;
    cout<<count(4,2)<<endl;
}
