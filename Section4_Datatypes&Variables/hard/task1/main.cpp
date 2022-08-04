/*Problem #1: Swapping 3 numbers!
● Write a code to swap 3 numbers
● Let say we have numbers a = 115, b = 20, c = 301
● We wanna their final values to be: a = 20, b = 301, c = 115
● Challenge: Do the swap in 4 lines
*/
#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3,temp=0;
    cin>>num1>>num2>>num3;
    //4 lines
    temp=num1;
    num1=num2;
    num2=num3;
    num3=temp;
    cout<<num1<<" "<<num2<<" "<<num3<<"\n";
    return 0;
}
