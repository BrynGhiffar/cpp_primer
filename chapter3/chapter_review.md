Page: 125
1. This is because each integer type have different usages
	and are used based on the context of the problem being solved.
**Correct**
2. Multipart:
	a. `short num = 80;`
	b. `unsigned a = 42110;`
	c. `long long a = 3000000000;`
**Correct**
3. C++ does not introduce any safeguards that prevent the
	user from exceeding the limits of an integer type. The 
	behaviour when a user exceed the limit is undefined by
	the C++ standard.
**Correct**
4. `33L` defines a long literal while `33` defines an int 
	literal.
**Correct**
5. The char data type is an integral data type that represents
	character by integers, it uses the ASCII standard to convert 
	between the types. In this, since 65 is the ASCII value of 'a'.
	They are both equivalent.
**Incorrect**
tip: the first statements assigns the letter A
to grade only on a system using the ASCII code,
while the second statement works for other codes.
Also note that 'A' is a type char constant,
while 65 is a type int constant.
6. You could write the following program:
```
#include <iostream>
using namespace std;
int main() {
	char a = 88;
	cout << "88: " << a << endl;
}
```
**Correct**
7. The C++ standard mentions that the long is at least
	32 bits wide and at most 64 bits wide. Where as
	double values are at least 64 bits wide. So, 
	the maximum value of all C++ implementation of long is 
	19 digits long. Since, the guaranteed correctness of double
	values are the first 15 digits. So, it may introduce rounding errors.
**Correct**
tip: long has a minimum width of 32 bits and a maximum of 64 bits.
8. multipart:
	1. 74
	2. 4
	3. 0
	4. 4.5
	5. 3
**Correct**
9. You would write the statement, `int ans = int(x1) + int(x2);`.
	If you want to add them as a double you would write
	`int ans = int(x1 + x2);`, note that the type conversion
	is not mandatory, because C++ can handle the conversion 
	implicitly.
**Correct**
10. multipart:
	1. `int`;
	2. `float`
	3. `char`
	4. `char32_t`
	5. `double`
**Correct**
