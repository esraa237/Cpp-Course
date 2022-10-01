/*
● Input: Read an integer N followed by a single character
● Output: Print the character N times as below
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter=1;
    while(n>0){
        while(counter<n){
            cout<<"*";
            counter++;
        }
        cout<<endl;
        n--;
    }
    return 0;
}
