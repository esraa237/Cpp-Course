/*● Given 3 integers, you have to find the biggest one of them which is < 100.
○ Print -1 if no such number
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,maximum;
    cin>>a>>b>>c;
   maximum=-1;
   if(a<100&&a>maximum) maximum=a;
   if(b<100&&b>maximum) maximum=b;
   if(c<100&&c>maximum) maximum=c;
   cout<<maximum<<endl;
    return 0;
}
