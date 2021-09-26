#include "cow.h"

int main()
{
	Cow a1;
	a1.ShowCow();
	Cow a2 = {"Dinkers", "Swimming", 1000};
	Cow a3 = a2;
	a3.ShowCow();
	a1 = a2;
	a1.ShowCow();
}
