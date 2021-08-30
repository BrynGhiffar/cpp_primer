// 11.15 randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <fstream>
#include <cstdlib> 		// rand(), srand() prototypes
#include <ctime> 			// time() prototype
#include "vect.h"
int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0)); 		// seed random-number generator
	ofstream outfile;
	outfile.open("walk_result.txt");
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance: ";
	cin >> target;
	cout << "Enter step length: ";
	cin >> dstep;
	outfile << "Target distance: " << target << ", ";
	outfile << "Step size: " << dstep << endl;
	while (result.magval() < target)
	{
		outfile << steps << ": " << result << endl;
		direction = rand() % 360;
		step.reset(dstep, direction, Vector::POL);
		result = result + step;
		steps++;
	}
	outfile << "After " << steps << " steps, the subject "
		"has the following location:\n";
	outfile << result << endl;
	result.polar_mode();
	outfile << " or\n" << result << endl;
	outfile << "Average outward distance per step = "
		<< result.magval() / steps << endl;
	cout << "Bye!\n";
	// cin.clear();
	// while (cin.get() != '\n')
	// 	continue;
	return 0;
}
