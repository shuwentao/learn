#include <iostream>
#include <string>
#include <new>
#ifndef PLACENEW1_H_
#define PLACENEW1_H_
using namespace std;
class JustTesting
{
private:
	string words;
	int number;
public:
	JustTesting(const string & s = "Just Testing",int n = 0)
	{words = s; number = n ;cout << words << " constructed\n";}
	~JustTesting(){cout << words << " destroyed\n";}
	void Show() const {cout << words << ", "<<number<<endl;}
};
#endif
