#include <iostream>
#include "stock00.h"

int main(int argc,char *argv[])
{
	{
	using std::cout;
	cout << "Using constructor to create ne objects\n";
	Stock stock1("NanoSmart",10,20.0);
	stock1.show();

	Stock stock2 = Stock("Boffo Objects",2,2.0);
	stock2.show();

	cout << "Assigning stock1 to stock2:\n";
	stock2 = stock1 ;
	cout << "Listing stock1 and stock2:\n";
	stock1.show();
	stock2.show();

	cout << "Using a constructor to reset an object\n";
	stock1 = Stock("Nifty Foods",10,50.0);
	cout << "Revised stock1:\n";
	stock1.show();
	stock2.show();
	cout << "Done\n";
	}
	return 0;
}
