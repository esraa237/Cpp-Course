#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int n1,n2,n3,n4,n5,g=0,l=0;
    cin>>n1>>n2>>n3>>n4>>n5;
    if(n1<= x) l += 1;
    else g += 1;
    if(n2<= x) l += 1;
    else g += 1;
    if(n3<= x) l += 1;
    else g += 1;
    if(n4<= x) l += 1;
    else g += 1;
    if(n5<= x) l += 1;
    else g += 1;
    cout<<l<<" "<<g;
    return 0;
}
