#include <iostream>
#include "account.h"

Account::Account(const std::string & name,
									const std::string & acc_num, T bal)
{
	m_name = name;
	m_acc_number = acc_num;
	m_bal = bal;
}

void Account::show() const
{
	using std::cout; 
	using std::endl;
	using std::ios_base;
	
	// setting double cout format
	ios_base::fmtflags orig = cout.setf(ios_base::fixed);
	std::streamsize prec = cout.precision(2);

	cout << "Name: " << m_name << endl;
	cout << "Account number: " << m_acc_number << endl;
	cout << "Balance: $" << m_bal << endl;

	// reversing format options for cout
	cout.precision(prec);
	cout.setf(orig, ios_base::floatfield);
}

void Account::deposit(T amt)
{
	if (amt > 0)
	{
		m_bal += amt;
	}
	else
		std::cout << "Must withdraw more than zero dollars.\n";
}

void Account::withdraw(T amt)
{
	if (amt > 0)
		if (m_bal >= amt)
			m_bal -= amt;
		else
			std::cout << "Not enough balance.\n";
	else
		std::cout << "Must withdraw more than zero dollars.\n";
}
