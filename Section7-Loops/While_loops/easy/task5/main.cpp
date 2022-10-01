/*
Problem #5: Special Average
● Read integer N, followed by reading N numbers. Print 2 values
○ The average of the numbers in odd positions (1st, 3rd, 5th, …)
○ The average of the numbers in even positions (2nd, 4th, 6th, …)
*/
#include <iostream>

using namespace std;

int main()
{
    int n,counter;
    double sum_odd,sum_even,num;
    cin>>n;
    counter=1;
    while(counter<=n){
        cin>>num;
        if(counter%2==0){
            sum_even+=num;
        }
        else sum_odd+=num;
        counter++;
    }
    if(n%2==0)cout <<(sum_odd/(n/2))<<" "<<sum_even/(n/2);
    else cout <<(sum_odd/(n/2+1))<<" "<<sum_even/((n/2));

    return 0;
}
