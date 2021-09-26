# Chapter 9 Review Questions

1. multiple:
	a. automatic storage duration
	b. static storage duration - external linkage
	c. static storage duration with internal linkage
	d. static storage duration with no linkage

> **comments:**
> for b, c, d, you could have clarified how to define
> the variables. The answers provide the following:
> 	b. `secret` should be defined as an external variable
> 	in one file and declared using `extern` in the second
> 	file.
> 	c. `topsecret` could be defined as a static variable
> 	with internal linkage by prefacing the external
> 	definition with they keyword `static`. Or it could
> 	be defined in an unnamed namespace.
> 	d. `beencalled` should be defined as a static variable
> 	by prefacing a declaration in the function with they keyword
> 	`static`.

2. Differences:
	* When a the same name has been declared in a function,
		it cannot be imported using the `using` declaration.
		While it can be imported using the `using` directive.
		However, it will hide the name will be hidden.

> **comments:**
> A `using` declaration makes available a single name from a namespace, and it
> has the scope corresponding to the declarative region in which the `using`
> declaration occurs. A `using` directive makes available all names in a
> namespace. When you use a `using directive`, it as if you have declared the
> names in the smallest declarative region containing both the `using`
> declaration and the namespace itself.

3. Code:
```cpp
#include <iostream>
int main()
{
	double x;
	std::cout << "Enter value: ";
	while (!(std::cin >> x))
	{
		std::cout << "Bad input. Please enter a number: ";
		std::cin.clear();
		while (std::cin.get() != '\n')
			continue;
	}
	std::cout << "Value = " << x << std::endl;
	return 0;
}
```
> **comments:**
4. Code:
```cpp
#include <iostream>
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x;
	cout << "Enter value: ";
	while (!(cin >> x))
	{
		cout << "Bad input. Please enter a number: ";
		cin.clear();
		while (cin.get() != '\n')
			continue;
	}
	cout << "Value = " << x << endl;
	return 0;
}
```
> **comments:**
5. In the file where you have the function to return the average as an int. You
	 could have the following:
```cpp
// prototypes
static int average(int a, int b);
double average(int a, int b);

// definitions
static int average(int a, int b)
{
	int tot = a + b;
	return tot / 2;
}

double average(int a, int b)
{
	double tot = a + b;
	return tot / 2;
}
```
> **comments:**
> This does not work since, both functions have the same signature
> Instead, what you could do is have two separate static functions
> in each file. Or each file could define the appropriate
> average() function in an unnamed namespace.
6. Output:
```
10
4
0
Other: 10, 1
another(): 10, -4
```
> **comments:**
> external variables are defined as zero. So `y` is zero
7. Output:
```
1
4, 1, 2
2
2
4, 1, 2
2
```
