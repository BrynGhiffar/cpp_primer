#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
typedef double T;
class Account {
	private:
		std::string m_name;
		std::string m_acc_number;
		T m_bal;
	public:
		Account(const std::string & name,
						const std::string & acc_number, T bal = 0.0);
		void show() const;
		void deposit(T amt);
		void withdraw(T amt);
};

#endif
