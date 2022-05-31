/*
*************Bit Masking*********

Turn a bit on from off or vice-versa, check if a bit is on or off and for toggling a bit is called bit mask.
Bit masking in c++ has following operations:

1. set i th bit
2. clear i th bit
3. find i th  bit

Based on the above operation various problems could be solved using bit masking.

1.or ,left shift operation to set the ith bit.
2.and ,complement of left shift operation used to unset the ith bit
3.xor ,left shift operation to toggle the bits
*/

/*
example
20
10100

1.set
2nd bit
20<<2 --> 80 binary of 80 is 1010000
10100 | 10100000 =
 00010100
 10100000
+--------
 10110100

Similarly unset use and complement of left shift
toggle --> xor ,left shift
*/
#include<iostream>
using namespace std;
void set_mask(int x)
{
   int i;
   cout<<"which position do you want to set?";
   cin>>i;
   cout<<"before "<<x<<endl;
   x|=x<<i;
   cout<<"after "<<x<<endl;

}

void unset_mask(int x)
{
    int i;
    cout<<"enter the position you want to clear: ";
    cin>>i;
    cout<<"before clearing: "<<x<<endl;
    x&=~(x<<i);
    cout<<"after clearing: "<<x<<endl;

}

void toggle_bit(int x)
{
    int i;
    cout<<"Which bit do you want to toggle? ";
    cin>>i;
    cout<<"before toggle: "<<x<<endl;
    x^=x<<i;
    cout<<"After toggle: "<<x<<endl;
}

int main()
{
    int num,ch;
    cout<<"enter a number: ";
    cin>>num;
    while(1)
    {
        cout<<"your choices are: \n 1.SET MASK\n 2.UNSET/CLEAR MASK\n 3.TOGGLE BIT\n"<<endl;
        cout<<"enter your choice: ";cin>>ch;
        switch(ch)
        {
            case 1:set_mask(num);
            break;
            case 2:unset_mask(num);
            break;
            case 3:toggle_bit(num);
            break;
            default:cout<<"invalid choice"<<endl;
            break;

        }

    }

   return 0;


}
