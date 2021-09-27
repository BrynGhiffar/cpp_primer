#include <iostream>
#include "brass.h"

int main()
{
	using std::cout;
	using std::endl;
	BrassPlus dilly = {
		"Annie Dill", 493222, 2000.00
	};

	Brass * pb = &dilly;
	Brass & rb = dilly;
	dilly.ViewAcct();
	cout << endl;
	cout << "Withdrawing $2100:\n";
	pb-> Withdraw(2100.00);
	dilly.ViewAcct();
	cout << endl;
	cout << "Depositting $200:\n";
	rb.Deposit(200.00);
	pb->ViewAcct();
	cout << endl;
}
