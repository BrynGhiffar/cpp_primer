#include <iostream>

using namespace std;

int main(){
	cout << "Enter height (inches): ______\b\b\b\b\b\b";
	int height;
	cin >> height;
	const int feet_to_inch = 12;
	cout << "Your height is " << height / feet_to_inch << " feet and "
		<< height % feet_to_inch << " inches.\n";
}
