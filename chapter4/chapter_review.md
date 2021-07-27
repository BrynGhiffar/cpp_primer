Solutions to the questions are found on page 1337 or (1352 pdf page number)

1. Multipart:
	a. `char actors[30];`
	b. `short bestie[100];`
	c. `float chuck[13];`
	d. `long double dipsea[64];`
**Comments:**

2. No, the question uses the built-in arrays.
3. Code:
```cpp
int arr[5];
arr[0] = 1;
arr[1] = 3;
arr[2] = 5;
arr[3] = 7;
arr[4] = 9;
```
**Comments**
* You could have used:
	```cpp
	int arr[5] = {1, 3, 5, 7, 9};
	```
4. `int total = arr[0] + arr[4];`
**Comments**
5. `std::cout << ideas[1] << std::endl;`
**Comments**
6. `char str[] = "cheeseburger";`
**Comments**
7. `std::string ws = "Waldorf Salad";`
**Comments**
8. Code:
```cpp
struct Fish{
	char kind[30];
	int weight;
	float length;
};
```
**Comments**
9. `Fish mel {"Salmon", 90, 10f};`
**Comments**
10. Code:
```cpp
enum Response {No, Yes, Maybe};
```
**Comments**
11. Code: 
```cpp
double * pt = &ted;
std::cout << *pt << std::endl;
```
**Comments**
12. Code:
```cpp
double * pt = treacle;
std::cout << *pt << " " << *(pt + 9) << std::endl;
```
**Comments**
13. Code:
```cpp
std::cout << "Enter a positive integer: ";
int size;
std::cin >> size;
int * arr = new int[size];
std::cout << "Enter a positive integer: ";
std::cin >> size;
std::vector<int> vc(size);
```
**Comments**
14. Yes, the following code if valid code.
		it will print the location of where the
		string is stored in memory.
**Comments:**
You could have explained that, since
the literal above is a string it evaluates
to the address of the first character of the
first string. And also explain that the type
cast convert the address to a 'pointer-to-int',
which is then interpreted as an address. Assuming
the int type is wide enough to hold an adreess.
15. Code:
```cpp
Fish * fav = new Fish;
std::cout << "Enter kind of fish: ";
std::cin >> fav->kind
```
**Comments:**
16. Replacing `cin.getline(address,80);` with `cin >> address`
will cause the program to no longer be able to take whole
line inputs and will stop getting character input once
a whitespace character is reached.
**Comments:**
You could have also added the fact that `cin >> `
causes the program to skip whitespace characters
until it finds a non-whitespace character, then reads
those characters until it encounters a whitespace character
again. Therefore, it will skip over the newline character,
following the numberic input and avoiding the problem posed.
17. Code:
```cpp
#include <vector>
#include <array>
#include <string>

int main() {
	const int size = 10;
	std::vector<string> vs(size);
	std::array<string, size> va;
}
```
