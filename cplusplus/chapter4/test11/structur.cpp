#include <iostream>
using namespace std;

struct inflatable 
{
	char name[20];
	float volume;
	double price;
};

int main(int argc,char *argv[])
{
	inflatable guest = 
	{
		"Glorious Gloria",
		1.88,
		29.99
	};
	inflatable pal = 
	{
		"Audacious Arthur",
		3.12,
		32.99
	};
	
	cout << "Expand your guest list width " << guest.name;
	cout << " and " << pal.name << "!\n";
	cout << "You can have both for $";
	cout << guest.price + pal.price << "!\n" ;
	return 0;
}
