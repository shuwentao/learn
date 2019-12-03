#include <iostream>
#include <cstring>

using namespace std;

int main(int argc,char *argv[])
{
	char word[5] = "?ate";
	for(char ch = 'a'; strcmp(word,"mate");ch++){
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop end,word is " << word << endl;
	return 0;
}
