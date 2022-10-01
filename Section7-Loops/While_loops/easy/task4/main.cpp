/*Problem #: Print face down left angled triangle
*/
#include <iostream>

using namespace std;

int main()
{
    int n,row,col;
    cin>>n;
    row=n;
    while(row>0)
    {
        col=row;
        while(col>0){
            cout<<"*";
            col--;
        }
        cout<<endl;
        row--;
    }
    return 0;
}
