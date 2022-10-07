/*Problem #1: Print diamond
● Read an integer N, then print diamond of 2N rows
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
            int space=n-row;
            while(space>0){
                cout<<" ";
                space--;
            }
            int star=1;
            while(star<=2*row-1){
                cout<<"*";
                star++;
            }
        cout<<endl;
        row++;
    }
     row=n;
    while(row>0){
            int space=n-row;
            while(space>0){
                cout<<" ";
                space--;
            }
            int star=1;
            while(star<=2*row-1){
                cout<<"*";
                star++;
            }
        cout<<endl;
        row--;
    }
    return 0;
}
