#include <iostream>
#include "../test1/coordin.h"
using namespace std;

int main(int argc,char *argv[])
{
	rect rplace;
	polar pplace;

	cout<<"Enter the x and the y values: "<<endl;
	while(cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Bye!\n";
	return 0;
}
