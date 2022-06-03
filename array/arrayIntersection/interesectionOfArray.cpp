//array interesction
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    //Worst time complexity
    /*
    vector<int>ans;
    int a[5]={4,2,9,3,-4};
    int b[7]={1,9,5,-4,41,0,6};
    for(int i=0;i<5;i++){
        int element = a[i];
        for(int j=0;j<7;j++){
            if(element==b[j]){
                ans.push_back(element);
                b[j]=INT_MIN;
                break;
            }
        }
    }

    for(int k=0;k<ans.size();k++){
        cout<<ans[k]<<" ";
    }*/
//******Intersection of sorted arrays**********
    int a[5]={1,2,3,8,12};
    int b[7]={-1,2,5,7,8,11,20};
    vector<int>v;
    int i=0,j=0;
    while(i<5&&j<7)
    {
        if(a[i]==b[j]){
            v.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for(int k=0;k<v.size();k++){
        cout<<v[k]<<" ";
    }
}
