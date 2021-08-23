#include <iostream>
#include "person.h"

int main()
{
	using std::cout;
	using std::endl;
	cout << "Creating person with zero arguments...\n";
	Person me0;
	me0.Show();
	me0.FormalShow();
	cout << "Creating person with one argument...\n";
	Person me1("Ghiffar");
	me1.Show();
	me1.FormalShow();
	cout << "Creating person with two arguments...\n";
	Person me2("Ghiffar", "Bryn");
	me2.Show();
	me2.FormalShow();

}
