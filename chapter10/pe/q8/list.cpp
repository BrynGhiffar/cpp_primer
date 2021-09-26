#include <iostream> 
#include "list.h"

bool List::isempty() const
{
	return size == 0;
}

bool List::isfull() const
{
	return size == LEN;
}

void List::add(const T & item)
{
	if (!isfull())
	{
		arr[size++] = item;
	} else
		std::cout << "List is full" << std::endl;		
}

void List::visit(void (*pf) (T &))
{
	for (int i = 0; i < size; i++)
		pf(arr[i]);
}
