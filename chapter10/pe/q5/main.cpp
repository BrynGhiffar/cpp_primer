#include <iostream>
#include <cstring>
#include "stack.h"

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	char ch;
	double total = 0;
	customer temp;
	Stack place;
	cout << "Type A to add a customer, type R to remove a customer\n"
					"from the customer stack, or press q to exit: ";
	while (tolower(ch = cin.get()) != 'q')
	{
		while (cin.get() != '\n');
		switch(ch)
		{
			case 'a':
			case 'A':
				if (!place.isfull()){
					cout << "Enter customer name: ";
					cin.get(temp.fullname, 35);
					while (cin.get() != '\n');
					cout << "Enter payment due: ";
					(cin >> temp.payment).get();
					place.push(temp);
					cout << "Stack is full.\n";
				}
				break;
			case 'r':
			case 'R':
				if (place.pop(temp)){
					cout << "Name: " << temp.fullname << endl;
					cout << "Payment: " << temp.payment << endl;
					total += temp.payment;
					cout << "Total Due: " << total << endl; 
				} else 
					cout << "Stack is empty.\n";
				break;
		}
	cout << "Type A to add a customer, type R to remove a customer\n"
					"from the customer stack, or press q to exit: ";
	}
}
