#include "utils.h"
#include <iostream>

int main()
{
	using SALES::Sales;
	using SALES::setSales;
	using SALES::showSales;
	Sales this_year;
	double ar[4] = {1.2, 3.0, 9.9, 1.0};
	Sales last_year;
	setSales(last_year);
	setSales(this_year, ar, 4);
	showSales(last_year);
	showSales(this_year);
}
