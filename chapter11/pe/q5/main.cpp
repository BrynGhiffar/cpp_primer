#include <iostream>
#include "stonewt.h"

int main()
{
	using std::cout;
	using std::endl;
	Stonewt a(124.98);
	Stonewt b(2, 12.42);

	a.to_double_pounds();
	cout << "a = " << a;
	a.to_int_pounds();
	cout << "a = " << a;
	a.to_stone();
	cout << "a = " << a;
	cout << endl;

	b.to_double_pounds();
	cout << "b = " << b;
	b.to_int_pounds();
	cout << "b = " << b;
	b.to_stone();
	cout << "b = " << b;
	cout << endl;

	Stonewt c = a + b;
	c.to_int_pounds();
	cout << "a + b = " << c;
	c.to_double_pounds();
	cout << "a + b = " << c;
	c.to_stone();
	cout << "a + b = " << c;
	cout << endl;

	c = a - b;
	c.to_int_pounds();
	cout << "a - b = " << c;
	c.to_double_pounds();
	cout << "a - b = " << c;
	c.to_stone();
	cout << "a - b = " << c;
	cout << endl;

	c = a * 3;
	c.to_int_pounds();
	cout << "a * 3 = " << c;
	c.to_double_pounds();
	cout << "a * 3 = " << c;
	c.to_stone();
	cout << "a * 3 = " << c;
}
