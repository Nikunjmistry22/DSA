#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6]={1,2,-1,3,-4,5};
    vector<int>pos;
    vector<int>neg;
    for(int i=0;i<6;i++){
        if(a[i]<0){
            neg.push_back(a[i]);
        }
        else
        pos.push_back(a[i]);
    }
    int i=0,j=0;
    for(int k=0;k<6;k++){
        if(k%2==0){
            a[k]=neg[i];
            i++;
        }
        else{
            a[k]=pos[j];
            j++;
        }
    }
    for(int m=0;m<6;m++){
        cout<<a[m]<<" ";
    }
}
