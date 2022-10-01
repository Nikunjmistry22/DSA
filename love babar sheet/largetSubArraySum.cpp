//print sub array continous.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={-5,1,8,4,6};
    /*int sum=0;
    int max_sum=INT_MIN;
    for(int i=0;i<5;i++){

        for(int j=i;j<5;j++){
            sum+=a[j];
        }
        //cout<<sum<<endl;
        if(sum>max_sum){
            max_sum=sum;
        }
        sum=0;
    }
    cout<<max_sum;*/
    //Optimized sol:- Kadane Algo
    int currsum=0;
    int maxsum=0;
    for(int i=0;i<5;i++){
        currsum=currsum+a[i];
        if(currsum>maxsum){
            maxsum=currsum;
        }
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<maxsum;
}
