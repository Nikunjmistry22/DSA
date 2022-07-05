//************************************
// Infinite loop using recursion
/*#include<bits/stdc++.h>
using namespace std;

int hello(int num){
cout<<num<<endl;
num+hello(num+1);

}
int main()
{
    hello(1);
}
*********************************** */

//***********************************
//Power of a raise to b using recursion
/*#include<bits/stdc++.h>
using namespace std;

int power(int a,int b){
if(b==0){
    return 1;
}
return a*power(a,b-1);
}

int main()
{
 cout<< power(3,4);
}*/

//*********************
//using Modulo arithmetic
/*
Using modulo property
(a+b)%n= a%n+b%n
(a*b)%n=(a%n*b%n)%n
*/

#include<bits/stdc++.h>
using namespace std;

long int power(long int a,long int b,int n){
long int res=1;
while(b>0){
    if((b&1)!=0){
        res=(res*a%n)%n;
    }
    a=(a%n*a%n);
    b=b>>1;
}
return res;
}
int main()
{
  cout<<power(24,5,1000000007);

}
s
