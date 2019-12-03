#include <iostream>
using namespace std;

int main(int argc,char *argv[])
{
	int ch ;
	int count;
	while((ch = cin.get())!= EOF){
		cout.put(char(ch));
		++count;
	}
	cout << endl << count << " characters read\n"; 
	return 0;
}
