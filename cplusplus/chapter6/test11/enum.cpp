#include <iostream>
using namespace std;

enum {red,orange,yellow,green,blue,violet,indigo};

int main(int argc,char *argv[])
{
	cout << "Enter color code (0-6): ";
	int code ;
	cin >> code ;
	while (code >= red && code <= indigo)
	{
		switch(code)
		{
			case red    : cout << "Her lips were read.\n" ; break;
			case orange : cout << "Her hair were read.\n" ; break;
			case yellow : cout << "Her shoes were read.\n" ; break;
			case green  : cout << "Her nails were read.\n" ; break;
			case blue   : cout << "Her sweatsuit was read.\n" ; break;
			case violet : cout << "Her eyes were read.\n" ; break;
			case indigo : cout << "Her mood was read.\n" ; break;
		}
		cout << "Enter color code (0-6): ";
		cin >> code ;
	}
	cout << "Bye\n";
	return 0;
}
