#include "utils.h"
#include <iostream>

int main()
{
	using SALES::Sales;
	using std::cout;
	using std::endl;
	cout << "Creating sales objects...\n";
	double ar[4] = {1.2, 3.0, 9.9, 1.0};
	Sales this_year(ar, 4);
	double ar1[3] = {1.2, 2.3, 3.4};
	Sales last_year(ar1, 3);
	this_year.showSales();
	last_year.showSales();

	cout << "Prompting user to enter sales values...\n";
	this_year.setSales();
	last_year.setSales();
	this_year.showSales();
	last_year.showSales();
}
