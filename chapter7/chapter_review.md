1. Steps in using a function:
	a. declaring the function prototype
	b. declaring the function definition
	c. calling the function.
**Comments:**
2. Prototypes:
```cpp
void igor(void);
float tofu(int);
double mpg(double f, double s);
long summation(long arr[], int size);
double doctor(const string name);
void ofcourse(boss);
string plot(map *);
```
**Comments:**
`doctor` function should have been a
C-stye string and the parameter should
be `const char * str`. The return type
for the `plot` function should also be
a C-style string and it should be `char *`
3. Function:
```cpp
void fill(int arr[], int size, int x)
{
	for (int i = 0; i < size; i++)
		arr[i] = x;
}
```
**Comments:**
4. Function:
```cpp
void fill(int * begin, int * end, int x)
{
	for (int * pt = begin; pt != end; pt++)
		*pt = x;
}
```
**Comments:**
5. Function:
```cpp
double tmax(const double arr[], int size)
{
	double maxv = arr[0];
	for (int i = 1; i < size; i++)
		if (maxv < arr[i])
			maxv = arr[i];
	return maxv;
}
```
**Comments:**
Should use the `if` statement to validate input for
if the size is actually zero. 
6. Because when you pass the fundamental types
to a function you are working with a copy of the
variable not the actual variable.
**Comments:**
You could have highlighted that the purpose
of the const qualifier is to protect the pointer
variable from being altered by the function. When you
are passing a fundamental type by value the function
already works with a copy. Therefore, the original data
is already protected and there is no need to use the const
qualifier.
7. Forms:
	a. character array
	b. pointer to a string
	c. string constant
**Comments:**
8. Function:
```cpp
int replace(char * str, char c1, char c2)
{
	int count = 0;
	while (*str != '\0')
	{
		if (*str == c1)
		{
			*str = c2;
			count++;
		}
		str++;
	}
	return count;
}
```
**Comments:**
You could have simply used `*str` instead of `*str != '\0'`
Although the one you wrote seems more clear.
9. The expression `*"pizza"` dereferences the address
where the string `"pizza"` is located, this will yield
the address of the first character, which is `'p'`.
The expression `"taco"[2]`, is similar to the
firt one only this will yield the third element in the
string which is `'c'`.
**Comments:**
10. You would pass it by value just as if you were passing
a fundamental type variable. For example, if there were
a function with a prototype `void doit(glitz cow);`.
Calling the function and passing it by value would be looking
like this `doit(raise);`, where raise is declared by `glitz raise;`.
Passing the address would be like `doit(&raise)` and of course
the matching function prototype would be `void doit(glitz * cow);`.
Passing by value uses a copy of the struct, so the programmer
doesn't have to worry about changes made. However, it could
take up space especially if the struct is quite large. Passing
the address would only pass the address of the struct, this is more
efficient but gives room for the function to modify the struct.
You can use the const keyword to change this.
**Comments:**
11. Prototype:
```cpp
int judge(int (*func)(const char *));
```
**Comments:**
12. Multiple:
	a. Function:
		```cpp
		void show(applicant app)
		{
			using namespace std;
			cout << "name: " << app.name << endl;
			for (int i = 0; i < 3; i++)
				cout << "credit ratings #"<< i + 1 
						<< " : " << app.credit_ratings[i];
		}
		```
	b. Function:
		```cpp
		void show(const * applicant app)
		{
			using namespace std;
			cout << "name: " << app->name << endl;
			for (int i = 0; i < 3; i++)
				cout << "credit ratings #"<< i + 1 
						<< " : " << app->credit_ratings[i];
		}
		```
**Comments:**
13. Code:
```cpp
typedef void (*t1)(applicant *);
typedef const char * (*t2)(const applicant * a1, const applicant * a2);
void (*p1)(applicant *) = f1;
t1 p1 = f1;
t2 p2  = f2;
t1 ap[5];
t2 (*pa)[10];
```
**Comments:**
You did not include the type in the first typedef. That has been fixed.
The solutions did not include the labels for the formal parameters.
It is unknown of whether the one you wrote is legal.
