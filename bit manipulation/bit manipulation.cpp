#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    /*Bits Manipulation*/
    ll a=4;
    ll b=6;

    cout<<"And: "<<(a&b)<<endl;
    cout<<"OR: "<<(a|b)<<endl;
    cout<<"complement of a: "<<(~a)<<endl;
    cout<<"xor: "<<(a^b)<<endl;
    //*********left shift*******

    /* For small numbers left shift 1 time is basically as (2*n)
    for n time ((2^n)*n)
    for large numbers left shift tend to be negative numbers*/

    cout<<"left shift 1 time: "<<(a<<1)<<endl;
    cout<<"left shift 3 time: "<<(a<<3)<<endl;

    //*********Right shift*******

    /* For small numbers right shift 1 time is basically as (n/2)
    for n time it will be (n/(2^n))*/

    cout<<"right shift 1 time: "<<(b>>1)<<endl;
    cout<<"right shift 3 time: "<<(35>>3)<<endl;


    //********Swap two numbers************
    ll n=12;
    ll m=7;
    n=n^m;
    m=n^m;
    n=n^m;
    cout<<"Swap numbers: "<<n<<" "<<m<<endl;

}
