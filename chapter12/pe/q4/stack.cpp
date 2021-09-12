#include "stack.h"

Stack::Stack(int n)
{
	size = n;
	pitems = new Item[size];
	top = 0;
}

Stack::Stack(const Stack & st)
{
	size = st.size;
	pitems = new Item[size];
	top = st.top;
	for (int i = 0; i < top; i++)
		*(pitems + i) = st.pitems[i];
}

Stack::~Stack()
{
	delete[] pitems;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == size;
}

bool Stack::push(const Item & item)
{
	if (isfull())
		return false;
	else
	{
		pitems[top++] = item;
		return true;
	}
}

bool Stack::pop(Item & item)
{
	if (isempty())
		return false;
	else
	{
		item = pitems[--top];
		return true;
	}
}

Stack & Stack::operator=(const Stack & st)
{
	size = st.size;
	pitems = new Item[size];
	top = st.top;
	for (int i = 0; i < top; i++)
		*(pitems + i) = st.pitems[i];
	return *this;
}
