/*Swapping 2 numbers!
● Write a program that reads 2 variables num1 and num2
○ E.g. say we read num1 = 7 and num2 = 231
*/
#include <iostream>
using namespace std;

int main()
{
    int num1,num2,num3=0;
    cin>>num1>>num2;
    num3=num1;
    num1=num2;
    num2=num3;
    cout<<num1<<" " <<num2<<endl;
    return 0;
}
