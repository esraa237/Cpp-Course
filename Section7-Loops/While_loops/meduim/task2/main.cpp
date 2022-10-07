/*
Problem #2: Special multiples 1
● Read an integer N : print all numbers that satisfy the following property
○ Either number is divisible by 8
○ Or divisible by both 4 and 3
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter=0;
    while(counter<=n){
        if(counter%8==0)cout<<counter<<" ";
        else if(counter%4==0&&counter%3==0)cout<<counter<<" ";
        counter++;
    }
    return 0;
}
