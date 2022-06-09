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
#include<bits/stdc++.h>
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
}
