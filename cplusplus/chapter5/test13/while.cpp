#include <iostream>
const int ArSize = 20;
using namespace std;

int main(int argc,char *argv[])
{
	char name[ArSize];
	cout << "Your first name,please: ";
	cin >> name;
	cout << "Here is your name , verticalized and ASCIIized:\n";
	int i = 0 ;
	while(name[i] != '\0'){
		cout << name[i] << ": " << int(name[i]) << endl ;
		i++;
	}
	
	return 0;
}
