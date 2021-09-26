# Chapter 10 Review
1. A class is a user defined type.
> **comments:**
> A class is a definition of a user-defined type. A class declaration specifies
> how data is to be stored, and it specifies the methods (class member 
> functions) that can be used to access and manipulate that data.
2. Classes achieve abstraction, encapsulation and data hiding by representing
the data contained in the classes in terms of how they interface with the
user.
> **comments:**
> A class represents the operations you can perform on a class object with a
> public interface of class methods; this is abstraction. The class can use 
> private visibility (the default) for data members, meaning that the data
> can be accessed only through the member functions; this is data hiding.
> Details of the implementation, such as data representation and method 
> code, are hidden; this is encapsulation.
3. A class is a user defined type, and an object is an instance of a class.
> **comments:**
> A class defines a type, including how it can be used. An object is a variable
> or another data object, such as that produced by `new`. which is created and
> used according to the class definition. The relationship between a class and
> an object is the same as that between a standard type and a variable of that
> type.
4. Each object holds itw own copies of the data portion of a class declaration,
but they share the class methods.
> **comments:**
> If you create several objects of a given class, each object comes with
> storage for its own set of data. But all the objects use the one set of
> member functions. (Typically, methods are public and data members are 
> private, but that's a matter of policy, not of class requirements.)
5. Code:
```cpp
#include <string>
typedef double T
class Account {
	private:
		std::string m_name;
		std::string m_acc_number;
		T m_bal;
	public:
		Account(const std::string & name,
						const std::string & acc_number, T m_bal = 0.0);
		Account();
		void show() const;
		void depost(int amt);
		void withdraw(int amt);
};
```
> **comments:**
6. Class constructors are called when the objects are initialized.
Class destructors are called when the objects goes out of scope.
> **comments:**
> A class constructor is called when you create an object of that class or when
> you explicitly call the constructor. A class destructor is called when the
> object expires.
7. Code:
```cpp
#include <string>
Account::Account(const std::string & name, 
									const std::string & acc_number, T bal)
{
	m_name = name;
	m_acc_number = acc_number;
	// Assume an account can be created with negative balance
	m_bal = bal;
}
```
> **comments:**
8. The default constructor is a constructor with no arguments.
It is called when the object is intantiated with no arguments.
The advantage of having one, is that we have control of what data
is stored when the object is intantiate with no arguments.
> **comments:**
> * A default constructor has no arguments or has defaults for all arguments
> * A default constructor enables you to declare objects without initializing
> them. Even if you've already defined an initializing constructor.
> * It allows you to declare arrays.
9. Code:
```cpp
// 10.7 stock20.h -- augmented version
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>

class Stock 
{
	private:
		std::string company;
		int shares;
		double share_val;
		double total_val;
		void set_tot() {total_val = shares * share_val;}
	public:
		Stock(); 			// default constructor
		Stock(const std::string & co, long n = 0, double pr = 0.0);
		~Stock();
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		void show() const;
		const Stock & topval(const Stock & s) const;
		const std::string & get_comp_name() const {return company;}
		int numshares() const {return shares;}
		double get_share_val() const {return share_val;}
		double get_total_val() const {return total_val;}
};

#endif
```
> **comments:**
> * put inline code DONE
10. The `this` pointer is available to class methods. It points to the object
instance and therefore `this` would be the address of the object, and `*this`
represents the object itself.
itself.
> **comments:**
> * clarify where the pointer is available.
