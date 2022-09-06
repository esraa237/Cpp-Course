#include <iostream>

using namespace std;

int main()
{
    int num;
	cin >> num;

	// Is even using %2
	bool is_even1 =(num%2==0) ;
    cout<<is_even1 <<endl;
	// is even using /2
	double x = (double)num / 2;
	double result=x-((int)num/2);
	bool is_even2 =(result==0);
    cout<<is_even2<<endl;
	// is even using %10
	int y =num%10;
	bool is_even3 =((y==0)||(y==2)||(y==4)||(y==6)||(y==8)) ;
    cout<<is_even3 ;
	return 0;
}
