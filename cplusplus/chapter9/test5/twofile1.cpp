#include <iostream>
using namespace std;
int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main(int argc,char *argv[])
{
	cout << "main() reports the following addresses:\n";
	cout << &tom << " = &tom " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
	remote_access();
	return 0;
}

