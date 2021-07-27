#include <iostream>

int main(){
	using namespace std;
	double euro_petrol_consumption;
	cout << "Enter automobile gasoline consumption (litres/100km): ";
	cin >> euro_petrol_consumption;
	const double mile_to_km = 100 / 62.14; // km / miles
	const double gal_to_litre = 3.875; // litre / gal
	// lkm = litr / 100km = (gal * gal_to_litre) / (mile * mile_to_km / 100)
	// 		= (gal / mile) * (gal_to_litre / mile_to_km) * 100
	// 		= 1 / (mile / gal) * (gal_to_litre / mile_to_km)
	// mpg = 1 / lkm * (gal_to_litre / mile_to_km)
	// 
	// mpg = miles / gal = (km * 1 / mile_to_km) / (litre * 1 / gal_to_litre)
	// 			= km / litre * (gal_to_litre / mile_to_km)
	// 			= (100 * km) / litre * (gal_to_litre / mile_to_km) * 1 / 100
	//
	// (mile / km) / (gal / litre) = (mile / gal) / (km / litre)
	const double kmpl_to_mpg = gal_to_litre / mile_to_km;
	double us_gas_consumption = 100.0 / euro_petrol_consumption 
															* (kmpl_to_mpg);
	us_gas_consumption = 1 / euro_petrol_consumption * 
											(gal_to_litre / mile_to_km) * 100.0;
	cout << "automobile gasoline consumption (mpg): " 
			<< us_gas_consumption << endl;
}
