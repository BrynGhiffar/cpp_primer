#include<iostream>

using namespace std;

int main(){
	const int feet_to_inch = 12;
	cout << "Enter your height (feet inch): ";
	int height_feet; cin >> height_feet;
	int height_inch; cin >> height_inch;
	cout << "Enter your weight (pounds): ";
	int weight_pound; cin >> weight_pound;

	height_inch = height_inch + height_feet * feet_to_inch;
	const double inch_to_meter = 0.0254;
	double height_meter = height_inch * inch_to_meter;
	const double kg_to_pound = 2.2;
	double weight_kg = double(weight_pound) / kg_to_pound;
	double bmi = weight_kg / (height_meter * height_meter);
	cout << "BMI: " << bmi << endl;

}
