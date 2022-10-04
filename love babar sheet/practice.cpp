#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    a={3,2,1,8,1,-3};
    int n=a.size()-1;
    int s=0;
    while(n--){
    for(int i=0;i<a.size();i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
            s++;
        }
    }
    }

    cout<<"max comparisons "<<s;
}
