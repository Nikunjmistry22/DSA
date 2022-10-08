#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[8]={1,-2,2,9,7,7,2,5};
    int k=4;
    int n=8;
    for(int i=0;i<8;i++){
        a[a[i]%n]=a[a[i]%n]+n;
    }
    for(int j=0;j<8;j++){
        if(a[j]/n==(8/k)){
            cout<<j<<endl;
        }
    }
}
