/*Write a program that reads 2 integers A, B
○ B is either -1 or 1
■ If -1, print 2*A+1
■ If 1, print A*A*/

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int equ1=a*a;
    int equ2=2*a+1;

    int is_1=(b+1)/2;
    int is_negative_1=1- is_1;
    cout<<(equ1*is_1)+(equ2*is_negative_1);

    return 0;
}
