#include <iostream>
using namespace std;

int main(int argc,char *argv[])
{
	cout.setf(ios_base::fixed,ios_base::floatfield);
	float tree = 3;
	int guess(3.9832);
	int debt = 7.2;
	cout << " tree = " << tree << endl ;
	cout << " guess = " << guess << endl ;
	cout << " debt = " << debt << endl ;
	
	return 0;
}
