#include "plorg.h"

int main()
{
	Plorg a;
	a.show();
	Plorg b("Johnny");
	b.show();
	Plorg c("Paul", 21);
	c.show();
	c.update_ci(9);
	c.show();
}
