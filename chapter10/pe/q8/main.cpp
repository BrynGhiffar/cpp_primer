#include <iostream>
#include "list.h"

using std::cout;
using std::endl;

void show(T & item)
{
	cout << item << " ";
}

int main()
{
	List arr;
	arr.add(10);
	arr.add(20);
	arr.add(30);
	arr.add(10);
	arr.add(20);
	arr.add(30);
	arr.add(10);
	arr.add(20);
	arr.add(30);
	arr.add(10);
	arr.add(20);
	arr.add(30);
	arr.visit(show);
	cout << endl;
}
