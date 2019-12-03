#include <iostream>
#include "../test1/stock00.h"

int main(int argc,char *argv[])
{
	Stock fluffy_the_cat;
	fluffy_the_cat.acquire("NanoSmart",20,12.50);
	fluffy_the_cat.show_plus();
	fluffy_the_cat.buy(15,18.125);
	fluffy_the_cat.show_plus();
	fluffy_the_cat.sell(400,20.00);
	fluffy_the_cat.show_plus();
	fluffy_the_cat.buy(300000,40.125);
	fluffy_the_cat.show_plus();
	fluffy_the_cat.sell(300000,0.125);
	fluffy_the_cat.show_plus();
	return 0;
}
