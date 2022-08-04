/* Given 8 space-separated integers, find the sum of those in even places and
the sum of those in odd places.
○ Note: Even place means the 2nd, 4th, 6th or 8th numbers,
 odd places are the 1st, 3rd, 5th and 7th numbers.
○ Note: the 8 numbers will be on the same line
○ Note: Don’t print any welcome or by messages.
● Input: 11 2 7 9 12 -8 3 -1
● Output: 2 33*/
#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3,num4,num5,num6,num7,num8;
    cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8;
    cout<<(num2+num4+num6+num8)<<" " <<(num1+num3+num5+num7);


    return 0;
}
