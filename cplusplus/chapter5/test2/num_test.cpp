#include <iostream>
using namespace std;

int main(int argc,char *argv[])
{
	cout<<"Enter the starting countdown value: " << endl;
	int limit ;
	cin >> limit ;
	int i;
	for (i = limit ; i > 0 ; i -- ){
		cout << "i = " << i << "\n" ;
	}
	cout << "Done now that i = " << i << "\n" ;
	return 0;
}
