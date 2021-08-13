// 7.7 arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;

// function prototypes
// int fill_array(double ar[], int limit);
double * fill_array(double * begin, double * end);
// void show_array(const double ar[], int n);
void show_array(const double * begin, const double * end);
// void revalue(double r, double ar[], int n);
void revalue(double r, double * begin, double * end);

int main()
{
	using namespace std;
	double properties[Max];

	double * end = fill_array(properties, properties + Max);
	show_array(properties, end);

	if (end - properties > 0)
	{
		cout << "Enter evaluation factor: ";
		double factor;
		while (!(cin >> factor))		// bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, end);
		show_array(properties, end);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}

// int fill_array(double ar[], int limit)
double * fill_array(double * begin, double * end)
{
	using namespace std;
	double temp;
	int i;
	double * pt;
	for (i = 0, pt = begin; pt != end; i++, pt++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin)		// bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		} else if (temp < 0) // signal to terminate
			break;
		*pt = temp;
	}
	return pt;
}

// the following function can use, but not alter,
// the array whose address is ar
// void show_array(const double ar[], int n)
void show_array(const double * begin, const double * end)
{
	using namespace std;
	int i;
	const double * pt;
	for (i = 0, pt = begin; pt != end; i++, pt++)
	{
		cout << "Property #" << (i + 1) << ": $";
		cout << *pt << endl;
	}
}

// multiplies each element of ar[] by r
// void revalue(double r, double ar[], int n)
void revalue(double r, double * begin, double * end)
{
	
	for (double * pt = begin; pt != end; pt++)
		*pt *= r;
}

