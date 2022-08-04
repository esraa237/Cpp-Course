
/*Problem #1: Math operations
● Write a program that reads 2 numbers and print their + - * / as following
○ For inputs 12 and 3
● Do good testing for your code
○ E.g. consider zero as first or 2nd number
○ E.g. consider negative values
○ E.g. even and odd values
○ E.g. try the MAX of int: 2147483647*/

#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    cout<<num1<<" + "<<num2<<" = "<<(num1+num2)<<"\n"
        <<num1<<" - "<<num2<<" = "<<(num1-num2)<<"\n"
        <<num1<<" * "<<num2<<" = "<<(num1*num2)<<"\n"
        <<num1<<" / "<<num2<<" = "<<(num1/num2);
    return 0;
}
