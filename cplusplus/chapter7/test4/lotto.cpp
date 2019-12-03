#include <iostream>
using namespace std;

long double probability(unsigned numbers,unsigned picks);

int main(int argc,char *argv[])
{
	cout<<"hello world!"<<endl;
	return 0;
}

long double probability(unsigned numbers,unsigned picks)
{
	long double result = 0;
	long double n;
	unsigned p;
	for(n = numbers , p = picks ; p > 0 ; n-- ,p--)
	{
		result = result * n / p;
	}
	return result;
}
