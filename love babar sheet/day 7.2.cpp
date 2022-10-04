//Total occurence of element
//Time complexity O(n) linear search
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[7]={1,3,2,3,3,4,8};
    int target=3;
    int count=0;
    for(int i=0;i<7;i++){
        if(a[i]==target){
            count++;
        }
    }
    cout<<count<<endl;
}


//total occurence of element using Binary search of time complexity O(n);
#include<bits/stdc++.h>
using namespace std;

int occurence_first(int a[],int n,int k)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(a[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(a[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int occurence_last(int a[],int n,int k)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(a[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(a[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}



int main()
{
    int a[7]={2,1,3,4};
    int target=3;
    int first=occurence_first(a,7,3);
    int last=occurence_last(a,7,3);
    cout<<first<<" "<<last<<endl;
    if(first==last){
        cout<<first<<endl;
    }else if(last-first==1){
        cout<<last-first+1<<endl;
    }
    else{
        cout<<last-first<<endl;
    }

}


