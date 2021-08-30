// 11.15 randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib> 		// rand(), srand() prototypes
#include <ctime> 			// time() prototype
#include "vect.h"
int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0)); 		// seed random-number generator

	// initialize variables
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	unsigned long trials = 0;
	double target;
	double dstep;

	// meta stats
	double average_steps = 0;
	unsigned long max_steps = 0;
	unsigned long min_steps = 0;


	// starting loop
	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;

		cout << "Enter number of trials: ";
		if (!(cin >> trials))
			break;
		for (unsigned long i = 0UL; i < trials; i++)
		{
			while (result.magval() < target)
			{
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			average_steps += steps;
			if (max_steps < steps || max_steps == 0)
				max_steps = steps;
			if (min_steps > steps || min_steps == 0)
				min_steps = steps;

			// reset everything for next trial
			steps = 0;
			result.reset(0.0, 0.0);
		}
		average_steps /= trials;

		// // print number of steps and final location
		// cout << "After " << steps << " steps, the subject "
		// 	"has the following location:\n";
		// cout << result << endl;
		// result.polar_mode();
		// cout << " or\n" << result << endl;
		
		cout << "Average steps: " << average_steps << endl;
		cout << "Maximum number of steps: " << max_steps << endl;
		cout << "Minimum number of steps: " << min_steps << endl;

		// // print average outward distance
		// cout << "Average outward distance per step = "
		// 	<< result.magval() / steps << endl;

		// reset everything for next call
		// steps = 0;
		// result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}

	// exit program
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}
