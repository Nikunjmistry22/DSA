
//Merge 2 sorted array
//Brute force
//Time complexity O(n*m)  Space Complexity : O(n+m)
/*#include<bits/stdc++.h>
using namespace std;

void insertionsort(vector<int>& v){
     for(int i=1;i<v.size();i++){
            int temp=v[i];
            int j=i-1;
            for(;j>=0;j--){
                if(v[j]>temp){
                    v[j+1]=v[j];
                }
                else{
                    break;
                }
            }
            v[j+1]=temp;
        }
}

int main()
{
    int a[]={1,2,3,0,0,0};
    int n=3;
    int b[]={2,3,4};
    int m=3;
    vector<int>v;
    for(int i=0;i<n;i++){
        v.push_back(a[i]);
    }

    for(int i=0;i<n;i++){
        v.push_back(b[i]);
    }
    insertionsort(v);
    for(int k=0;k<v.size();k++){
        cout<<v[k]<<" ";
    }
}
    */

//Another Approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3]={1,2,5};
    int b[3]={3,4,6};
    int c[6];
    int i=0,j=0,k=0;
    while(i<3 && j<3){
        if(a[i]>b[j]){
            c[k++]=b[j++];

        }
        else{
            c[k++]=a[i++];
        }
    }
    while(i<3){
        c[k++]=b[i++];
    }
    while(j<3){
        a[k++]=a[j++];
    }

    for(int m=0;m<6;m++){
        cout<<c[m]<<" ";
    }
}
