/*Problem #3: Print left angled triangle
*/
#include <iostream>

using namespace std;

int main()
{
    int n,row,col;
    cin >> n;
    row=1;
    while(row<=n){
        col=row;
        while(col>=1){
            cout<<"*";
            col--;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
