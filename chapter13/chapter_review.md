1. A derived class inherits from a base class data members and
member functions. 
> **Comments:**
2. A derived class does not inherit constructors,
destructors or friends from the base class. 
> **Comments:**
> The assignment operator is also not inherited.
3. If the return type was `void` instead of `baseDMA &`
then we would not be able to chain assignment operators. If
the return type was `baseDMA` instead, then when chaining
assignment operator, the program would create temporary objects
that would that would be used when executing the following assignment
operator.
> **Comments:**
> If the method returned an object instead of a reference, the
> method execution would be slowed a bit because the return statement
> would involve copying the object.
4. When a derived class object is created the base class constructor
is called first and the derived class constructor is called after.
When deleting an object the derived class destructor is called first,
then the base class destructor is called.
> **Comments:**
5. Yes, the derived class still requires a constructor, since constructors
are not inherited. Although, when a constructor for the derived class is not
provided then the compiler will create a constructor that uses the default
base class constructor.
> **Comments:**
> If the derived class adds no new members, the constructor can have
> an empty body, but it must exist.
6. The method of the derived class object is called, a scoped resolution
operator should be used to make explicit which method that is intended
to be called in this case.
> **Comments:**
> * A derived class method supercedes the base-class method.
> * A base class method is called only if the derived class does not redefine
> the method or if you use the scope-resolution operator. However, you
> really should declare as virtual any functions that will be redefined.
7. Since, the assignment operator is not inherited a derived class should
always define assignment operators, except for the case when the object
should not use the assignment operator by design. In the case that new data
members are added the derived class, the assignment operator should take
this fact into account and assign it appropriately. Otherwise, the
class can just make use of the base classes assignment operator, taking
note to make clear use the scope resolution operator to differentiate
between the base class's assignment operator and the derived class'
assignment operator.
> **Comments:**
> The derived class should define an assignment operator if the derived-class
> constructors use the `new` or `new []` operator to initialize pointers
> that are members of that class. More generally, the derived class should
> define an assignment operator if the default assignment operator is incorrect
> for derived-class members.
8. Yes. *The process of converting a derived class reference or pointer
to a base class reference or pointer is called upcasting, and it is always
allowed for public inheritance without the need for an explicity typecast. 
P.738*. No. *The opposite process, converting a base-class pointer or reference
to a derived-class point or reference, is called downcasting, and it is not
allowed without an explicit type cast.*
> **Comments:**
9. Yes, you can assign a base class object to assign a derived class object.
Since, that would be upcasting. The reverse, is not true, since that would be
downcasting, and it not possible without an explicit typecast.
> **Comments:**
> Assignment of a derived class object to a base class pointer is also
> possible when the derived class objects defines an assignment operator
> with a base-class parameter.
10. Because that would be upcasting and it is possible to do without an
explicity type cast.
> **Comments:**
11. The base class object would have a copy constructor that takes a const reference
of the base class object as an argument. Since the function has a base class object
as an argument, the function would create a temporary object of the base class
type and use the copy constructor with the derived class object as the
argument to create the temporary object. The copy constructor of the base
class object would accept the derived class object as an argument because this
would be upcasting. 
> **Comments:**
> The net result is that a new baseclass object whose members correspond to the
> base class portion of the derived object is produced.
12. *One reason for this is efficiency. Passing an object by value involves
generating a temporary copy, which means calling the copy constructor and then
later calling the destructor.* ***Passing an Object by Value Versus Passing
a Reference. P. 770***
*Another reason for passing objects by reference is that, in the case of
inheritanc using virtual functions, a function defined as accepting a
base-class reference argument can also be used successfully with derived
classes, as you saw earlier in this chapter.* ***Passing an Object by Value
> **Comments:**
Verus Passing a Reference. P. 770***
13. Multiple:
	a. This would call the `head()` member function of the `Corporation` type.
	b. This would call the `head()` member function of they `PublicCorporation`
	type.
> **Comments:**
14. Problems:
	* `kit_sq_ft` is private data member of the Kitchen class and could
		not be read/written in the Kitchen' derived class.
> **Comments:**
> First, the situation does not fit the is-a model, so public inheritance
> is not appropriate. Second, the definition of `area()` in `House` hides
> the `Kitchen` version of `area()` because the two methods have different
> signatures.
