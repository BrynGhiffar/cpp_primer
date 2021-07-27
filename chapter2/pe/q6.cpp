#include <iostream>

double to_dist_au(double dist_lyr);

int main()
{
	using namespace std;
	cout << "Enter the number of light years: ";
	double dist_lyr;
	cin >> dist_lyr;
	double dist_au = to_dist_au(dist_lyr);
	cout << dist_lyr << " light years = " << dist_au 
			 << " astronomical units." << endl;
}

// converts light years to au
double to_dist_au(double dist_lyr)
{
	double conv_fac = 63240; // 1 light year is 63_240 au
	return dist_lyr * conv_fac;
}
