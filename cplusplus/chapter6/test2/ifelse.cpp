#include <iostream>
using namespace std;

int main(int argc,char *argv[])
{
	char ch;
	cout << "Type, and I shall repeat."<<endl;
	cin.get(ch);
	while (ch != '.')
	{
		if(ch == '\n')
			cout << ch;
		else 
			cout << ++ch;
		cin.get(ch);
	}
	
	cout << "\nPlease excuse the slight confusion.\n";
	
	return 0;
}
