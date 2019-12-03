#include <iostream>
using namespace std;

void simple();

int main(int argc,char *argv[])
{
	cout << "main () will call the simple() function:\n";
	simple();
		cout << "main() is finished width simple() function.\n";
	return 0;
}

void simple()
{
	cout << " I'm but a simlpe function.\n"
}
