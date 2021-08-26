# Chapter 11 Review
1. Code:
```cpp
// put this in the class declaration
Stonewt operator*(double n) const;

// put this in the definitions
Stonewt Stonewt::operator*(double n) const
{
	return Stonewt(pounds * n);
}
```
> **comments:**
2. A member function uses the calling object as its first argument.
While a friend does not and can simply access the private data
members of the object that are one of its arguments.
> **comments:**
3. Only to access the class's data members does a function need to
be a friend function to the class. Otherwise, the function can use
the class's public members to achieve the desired result.
> **comments:**
4. Code:
```cpp
// put this in the class declaration along with the
// the declaration for the member overload in question 1
friend Stonewt operator*(double n, const Stonewt & a);

// put this in the definitions along with the definition
// for the member function overload in question 1
Stonewt operator*(double n, const Stonewt & a)
{
	return a * n;
}
```
> **comments:**
5. Examples of operators that cannot be overloaded is the
`sizeof` operator, `.` membership operator and the `?:` conditional
operator.
> **comments:**
6. You can only overload them as member functions.
> **comments:**
7. Code:
```cpp
// prototype
operator double() const;

// definition
namespace VECTOR {
	Vector::operator double() const
	{
		 return mag;
	}
}
```
