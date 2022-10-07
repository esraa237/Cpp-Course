/*
Problem #4: Special Sum
● Read integer T for number of test cases.
● For each test case read integer N. Then read N integers a, b, c
● Output: Compute the sum of the following expression:
○ a, b*b, c*c*c, d*d*d*d, e*e*e*e*e……
■ That is the k-th number is repeated k times
● Input:
○ 2
○ 3 5 7 2
○ 4 1 2 3 4
● Output
○ 62 [as (5 + 7*7 + 2*2*2) = 62]
○ 288 [as (1+2*2+3*3*3+4*4*4*4) = 288]
*/
#include <iostream>
using namespace std;
int main()
{
    int t,n,num,counter,sum,i,factor;
    cin>>t;
    while(t>0){
        cin>>n;
        counter=1;
        sum=0;
        while(counter<=n){
            cin>>num;
            i=counter;
            factor=1;
            while(i>0){
              factor*=num;
              i--;
            }
            sum+=factor;
            counter++;
        }
        cout<<sum<<endl;
        t--;
    }
    return 0;
}
