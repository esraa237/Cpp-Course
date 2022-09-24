/*
Problem #2: Two Intervals Intersection
● Read 4 numbers representing 2 intervals and print their intersection interval. If
they don’t intersect, print -1
*/
#include <iostream>
using namespace std;
int main()
{
    int s1,e1,s2,e2,res_s,res_e;
    cin>>s1>>e1>>s2>>e2;
    if(s2>e1||s1>e2){cout<<-1; return 0;}
    if (s1<s2)res_s=s2;
    else res_s=s1;
    if (e1<e2)res_e=e1;
    else res_e=e2;
    cout << res_s<<" "<<res_e << endl;
    return 0;
}
