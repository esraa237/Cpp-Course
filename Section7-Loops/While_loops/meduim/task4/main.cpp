/*Problem #4: Minimum of values
● Input: Read integer T for a number of test cases.
● For each test case read integer N followed by reading N integers.
● Output: For each test case, print the minimum of the N integers.
*/
#include <iostream>
using namespace std;

int main()
{   int t,n,minimum,num;
    cin>>t;
    while(t>0){
        cin>>n;
        cin>>num;
        n--;
        minimum=num;
        while(n>0){
        cin>>num;
        if(num<minimum)minimum=num;
        n--;
        }
        cout<<minimum<<endl;
        t--;
    }
    return 0;
}
