/* We know N % M computes the remainder of division
● Write a program that reads 2 positive integers and print such reminder without
using the modulus operator %
*/
#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<n-((n/m)*m);
    return 0;
}
