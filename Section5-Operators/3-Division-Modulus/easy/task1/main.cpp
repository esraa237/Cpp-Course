/*Write a program that reads 5 numbers and print the following:
○ A) Their average
○ B) The sum of the first 3 numbers divided by the sum of the last 2 numbers
○ C) The average of the first 3 numbers divided by the average of the last 2 numbers.
○ What is the math relation between B and C?
● Input 1 2 3 4 5
○ 3
○ 0.666666667
○ 0.444444444*/
#include <iostream>

using namespace std;

int main()
{
    double n1,n2,n3,n4,n5;
    cin>>n1>>n2>>n3>>n4>>n5;
    cout<<(n1+n2+n3+n4+n5)/5<<"\n";
    cout<<(n1+n2+n3)/(n4+n5)<<"\n";
    cout<<((n1+n2+n3)/3)/((n4+n5)/2)<<"\n";
    return 0;
}
