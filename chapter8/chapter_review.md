1. Short functions are good candidates for inline functions.
**Comments:**
You could add short and non-recursive functions are good candidates
for inline status.
2. Multiple:
	a. `void song(const char * name, int times = 1);`
	b. You do not need to make any changes in the function
		definition.
	c. Yes you can
**Comments:**
You could have commented that the default for value for
times should be retained in order for name to have a default
value.
3. Code:
```cpp
void iquote(double num)
{
	using namespace std;
	cout << "\"" << num << "\"" << endl;
}

void iquote(int num)
{
	using namespace std;
	cout << "\"" << num << "\"" << endl;
}

void iquote(const char * str)
{
	using namespace std;
	cout << "\"" << str << "\"" << endl;
}
```
**Comments:**
4. Code:
```cpp
void print(box & the_box)
{
	using namespace std;
	cout << the_box.maker << endl;
	cout << the_box.height << endl;
	cout << the_box.width << endl;
	cout << the_box.length << endl;
	cout << the_box.volume << endl;
}

void update_volume(box & the_box)
{
	the_box.volume = the_box.height * the_box.width * the_box.length;
}
```
**Comments:**
You should have added const to the print function
5. You would change the function prototype and header
of fill to `void fill(std::array<double, Seasons> & arr);`. 
You would also need to change `cin >> (*pa)[i];` to `cin >> pa[i];`
Then you would change the function header and prototype of show to
`void show(const std::array<double, Seasons> & arr);`.
The function call `fill(&expenses)` should also be 
replaced to `fill(expenses)`. 
**Comments:**
6. Multiple:
	a. It is achievable with default arguments
	`double mass(double density, double volume = 1)`
	b. It is achievable with function overloading of
	`void repeat(int times, const char * str);` and
	`void repeat(const char * str);`
	c. Achievable with function overloading
	`int average(int a, int b);` and
	`double average(double a, double b);`
	d. Neither.
**Comments:**
a. Should have typed 1.0 instead of 1 for the default value.
b. 
c. 
d. You could have added that both versions would have the
same signature.
7. Code:
```cpp
template <typename T>
T larger(T a, T b)
{
	return a > b ? a : b;
}
```
**Comments:**
8. Code:
```cpp
template <>
box larger<box>(box a, box b)
{
	return a.volume > b.volume ? a : b;
}
```
**Comments:**
9. Multiple:
	a. type of v1 : float
	b. type of v2 : float &
	c. type of v3 : float &
	d. type of v4 : int
	e. type of v5 : double
**Comments:**
