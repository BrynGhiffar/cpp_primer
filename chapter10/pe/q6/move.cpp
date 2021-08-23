#include <iostream>
#include "move.h"

Move::Move(double a, double b)
{
	x = a; y = b;
}

void Move::showmove() const
{
	using std::cout;
	using std::endl;
	cout << "x, y = " << x << ", " << y << endl;
}

Move Move::add(const Move & m) const
{
	Move res(m.x + x, m.y + y);
	return res;
}

void Move::reset(double a, double b)
{
	x = a; y = b;
}
