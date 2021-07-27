#include <iostream>

using namespace std;

int main(){
	cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
	cout << "First, enter the degrees: ";
	int degree; cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	int minute; cin >> minute;
	cout << "Finally, enter the seconds of arc: ";
	int second; cin >> second;
	const double min_to_deg = 1.0 / 60.0;
	const double sec_to_deg = 1.0 / (60.0 * 60.0);
	double final_degree = double(degree)
										+ double(minute) * min_to_deg
										+ double(second) * sec_to_deg;
	cout << degree << " degrees, " << minute << " minutes, "
			<< second << " seconds = " << final_degree << " degrees"
			<< endl;
}
