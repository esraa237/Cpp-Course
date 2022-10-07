/*● Read integer N, then read N strings.
○ Print only the strings (of 2 letters).
○ These 2 letters must be letter ‘N’ and letter ‘O’
■ Regardless of lower or upper case
■ Regardless of the 2 letters order
■ E.g. print “No”, “ON”, “no” but ignore e.g. “YEs”, “Noooo”
■ That is: a word of 2 letters only N and O*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    string word;
    cin>>n;
    while(n>0){
        cin>>word;
        if(word=="no"||word=="NO"||word=="No"||word=="nO")cout<<word<<" ";
        if(word=="on"||word=="ON"||word=="oN"||word=="On")cout<<word<<" ";
        n--;
    }
}
