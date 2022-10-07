/*Problem #3: Special multiples 2
● Read an integer N (1 <= 30): Print the first N numbers that are
○ multiple of 3 but not multiple of 4
*/
#include <iostream>

using namespace std;

int main()
{
    int n,counter,num;
    cin>>n;
    counter=1;
    num=0;
    while(num<n){
        if(counter%3==0&&counter%4!=0){
            cout<<counter<<" ";
            num++;
        }
        counter++;
    }
    return 0;
}
