#include "stack.h"
#include <iostream>

int main()
{
	using namespace std;
	cout << "Creating \"my_numbers\" stack\n";
	Stack my_numbers(5);
	if (my_numbers.isempty())
		cout << "\"my_numbers\" is empty\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "Pushed " << i + 1 << " into \"my_numbers\"\n";
		my_numbers.push(i + 1);
	}
	if (!my_numbers.push(6))
		cout << "Failed to push 6 into \"my_numbers\"\n";
	if (my_numbers.isfull())
		cout << "\"my_numbers\" is full\n";

	Stack new_stack = my_numbers;
	cout << "Copied \"my_numbers\" into \"new_stack\"\n";
	Item t;
	for (int i = 0; i < 5; i++)
	{
		new_stack.pop(t);
		cout << "Popped " << t << " from \"new_stack\"\n";
	}
	for (int i = 0; i < 5; i++)
	{
		my_numbers.pop(t);
		cout << "Popped " << t << " from \"my_numbers\"\n";
	}

}
