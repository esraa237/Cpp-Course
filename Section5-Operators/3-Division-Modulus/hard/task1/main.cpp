/*Problem #1: 100 or 7?
● Write a program that reads an integer and print 100 if number is even or 7 if
number is odd
○ E.g. for input 8 ⇒ 100
○ E.g. for input 133 ⇒ 7
*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    bool is_even =(num%2==0);
    (is_even==1)? cout<<100 : cout<<7 ;

    //another solution

    int num;
    cin>>num;
    bool is_even =(num%2==0);
    bool is_odd=(num%2==1);
    cout<<(is_even*100 + is_odd*7);


    return 0;
}
