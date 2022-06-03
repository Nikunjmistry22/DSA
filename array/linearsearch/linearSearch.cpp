//Linear Search
#include<bits/stdc++.h>
using namespace std;

bool search(int a[],int n,int key)
{
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int a[9]={1,2,7,9,-5,4,12,35,21};
    int key;
    cout<<"Enter key value: ";cin>>key;
    bool found = search(a,9,key);
    if(found){
        cout<<"Key is present "<<endl;
    }else{
    cout<<"Key is not present"<<endl;
    }
}
