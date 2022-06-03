//pair sum
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int a[5]={5,-1,7,-5,3};
    int key;
    cout<<"Enter key value: ";
    cin>>key;
    vector <vector<int>>v;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;i++){
            if(a[i]+a[j]==key){
                vector<int>temp;
                temp.push_back(min(a[i],a[j]));
                temp.push_back(max(a[i],a[j]));
                v.push_back(temp);
            }
        }
    }
}
