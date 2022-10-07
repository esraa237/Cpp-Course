/*Problem #2: Reverse number
● Read an integer N, then find its reverse integer R
○ Print R R*3
● input ⇒ Output
○ 123 ⇒ 321 963
*/
#include <iostream>

using namespace std;

int main()
{
    int n,r=0,digit;
    cin>>n;
    while(n>0){
    digit=n%10;
    r=r*10+digit;
    n/=10;
    }
    cout<<r<<" "<<3*r;
    return 0;
}
