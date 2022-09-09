/*Problem #1: Arithmetic
● Read 2 integers A, B and print based on following cases:
○ if both are odd print their product A*B
○ if both are even print their division A/B (assume B != 0)
○ if the first is odd and the second is even then find their sum A+B
○ if the first is even and the second is odd then find their subtraction A-B
*/
#include <iostream>

using namespace std;

int main()
{
    int A,B;
    cin >>A>>B;
    if((A%2==1)&&(B%2==1)){
      cout << A*B <<endl;
    }
    else if((A%2==0)&&(B%2==0)){
      cout << A/B <<endl;
    }
    else if((A%2==1)&&(B%2==0)){
      cout << A+B <<endl;
    }
    else {
      cout << A-B <<endl;
    }
    return 0;
}
