/*
Given a starting number X and an ending number Y, print all numbers
between X and Y inclusive, each on a line
*/
#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    while(x<=y){
        cout<<x<<endl;
        x++;
    }
    return 0;
}
