/*
● Write a program that reads 2 numbers a, b and divides them (a/b), but prints
only the fraction part

*/
#include <iostream>

using namespace std;

int main()
{
    double n1,n2;
    cin>>n1>>n2;
    double res=(n1/n2);
    cout<<(res-((int)res))*n2;
    return 0;
}
