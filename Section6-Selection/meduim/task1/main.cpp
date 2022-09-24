/*Problem #1: Find Maximum of 10
● Read 10 integers, find which of them has the biggest value and print it.
● Inputs
○ 1 67 -9 88 -45 129 90 65 77 34 ⇒ 129
● Restriction: In your whole code there should be 2 integer variables defined
ONLY
*/
#include <iostream>

using namespace std;

int main()
{
    int x,res;
    cin>>res;
    cin>>x; if(x>=res) res=x;
    cin>>x; if(x>=res) res=x;
    cin>>x; if(x>=res) res=x;
    cin>>x; if(x>=res) res=x;
    cin>>x; if(x>=res) res=x;
    cin>>x; if(x>=res) res=x;
    cin>>x; if(x>=res) res=x;
    cin>>x; if(x>=res) res=x;
    cin>>x; if(x>=res) res=x;
    cout << res << endl;
    return 0;
}
