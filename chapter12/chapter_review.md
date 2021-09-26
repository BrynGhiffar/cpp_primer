1. multiple:
	a. the default constructor doesn't properly initialize the `String`
		class' member variable. Which will incur problems when for example
		the length of the string is queried or the string pointed to by the
		`str` pointer.
	b. The constructor copies the address of the `s` into the member
		variable `str`, this could be problematic if for example `s` is
		a automatic variable, which would go out of scope before the object
		instance does, hence `str` would be pointing to gibberish.
	c. The `str` member variable has not been initialized properly and hence
		the `str` pointer will be pointing to an undefined place in memory.
		This is problematic, since this could potentially overwrite important
		information.
> **comments:**
2. multiple:
	* You may forget to use the `delete` or `delete[]` operator
	on the pointer member variable which would cause a memory leak.
	*The solution* to this is to create a class destructor and use one
	of the *delete* operators previously said to free the memory
	pointed to by the pointer member variable.
	* If you will be initiliazing a class instance to a previously defined
	class instance, then the default copy constructor would copy
	the individual class members. This would be problematic if for example
	the previously defined object goes out of scope, which will cause the
	*delete* operator to be called on the `str` member variable. Hence,
	the newly defined objects' `str` member variable would be pointing
	to an invalid location in memory. *The solution* is to write a copy
	constructor that copies the individual characters of the `str` member
	variable.
	* If you will be assigning one object to another, the default assignment
	operator will copy the each objects' data member to the other. This would
	cause a similar problem as the previous problem. The solution is to overload
	the assignemt operator and copy each character of the `str` member variable.
> **comments:**
3. multiple:
	* copy constructor (if you define no constructors)
			behavior: the copy constructor behaves by copying the individual class
			data member variable.
	* assigment operator (if you don't define one)
			behavior: the assignment operator behaves by copying the individual class
			data member variable.
	* default constructor (if you don't define one)
			behavior: the default constructor does nothing but it allows you to
			declare arrays and uninitialized objects.
	* default destructor (if you don't define one)
			behavior: does nothing.
	* address operator (if you don't define one)
			behavior: The implicit address operator returns the address of the
			invoking object (that is, the value of the `this` pointer).
> **comments:**
4. code:
```cpp
class nifty
{
	private:
		// data
		char * personality;
		int talents;
	public:
		//methods
		nifty();
		nifty(const char * s);
		~nifty();
		friend ostream & operator<<(ostream & os, const nifty & n);
};

nifty::nifty()
{
	personality = new char [1];
	personality[0] = '\0';
	// personality = NULL;
	talents = 0;
}

nifty::nifth(const char * s)
{
	personality = new char [strlen(s) + 1];
	// personality = s;
	strcpy(personality, s);
	talents = 0;
}

ostream & nifty::operator<<(ostream & os, const nifty & n)
{
	os << n.personality << '\n';
	os << n.talent << '\n';
	return os;
}
```
> **comments:**
5. multiple:
	a. multiple:
		1. This statement would invoke the default constructor
		2. This statement would invoke the second constructor
		3. second constructor
		4. default consructor
		5. copy constructor
		6. second constructor
		7. default assignment operator
		8. default assignment operator and the second constructor to implicitly
				cast the `const char *` object.
	b. assignment operator
> **comments:**
