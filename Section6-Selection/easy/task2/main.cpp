/*Problem #2: Sort 3 numbers
● Given 3 integers, sort (order) them in ascending order and print them .
*/
#include <iostream>

using namespace std;

int main()
{   int a,b,c,n1,n2,n3;
    cin>>a>>b>>c;
    if(a<=b && a<=c &&b<=c){n1=a; n2=b; n3=c;}
    if(a<=b && a<=c &&c<=b){n1=a; n2=c; n3=b;}
    if(b<=a && b<=c &&a<=c){n1=b; n2=a; n3=c;}
    if(b<=a && b<=c &&c<=a){n1=b; n2=c; n3=a;}
    if(c<=a && c<=b &&b<=a){n1=c; n2=b; n3=a;}
    if(c<=a && c<=b &&a<=b){n1=c; n2=a; n3=b;}
    cout<<n1<<" "<<n2<<" "<<n3;
    return 0;
}
