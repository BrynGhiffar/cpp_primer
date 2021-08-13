#include <iostream>
using namespace std;
typedef double (*fp)(double x, double y);

double calculate(double a, double b, fp func);
double add(double x, double y);
double subt(double x, double y);
double mult(double x, double y);

int main()
{
	cout << "Enter a pair of numbers: ";
	fp my_funcs[3] = {add, subt, mult};
	char ops[3] = {'+', '-', '*'};
	double x, y;
	while (cin >> x >> y)
	{
		for (int i = 0; i < 3; i++)	
		{
			cout <<  x << ops[i] << y << " = " 
				<< calculate(x, y, my_funcs[i])
				<< endl;
		}
		cout << "Enter another pair (press q to exit): ";
	}
}

double calculate(double a, double b, fp func)
{
	return func(a, b);
}

double add(double x, double y)
{
	return x + y;
}

double subt(double x, double y)
{
	return x - y;
}

double mult(double x, double y)
{
	return x * y;
}
