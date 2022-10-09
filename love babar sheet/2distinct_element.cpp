#include<bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int> nums)
    {
        vector<int>v;
        int x=0;
        int set_bit_no;
        int i=0,a=0,b=0;
        for(int i=0;i<nums.size();i++){
            x=x^nums[i];
            set_bit_no=x & ~(x-1);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] & set_bit_no){
                a=a^nums[i];
            }
            else{
                b=b^nums[i];
            }
        }
        if(a>b){
            v.push_back(b);
            v.push_back(a);
        }
        else{
            v.push_back(a);
            v.push_back(b);
        }

        return v;
    }

int main()
{
    //Optimized solution
    /* Time complexity O(n)*/
}
