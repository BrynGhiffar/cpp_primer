// 10.10 stack.h -- class definition for the stack ADT
#ifndef STACK_H_
#define STACK_H_

struct customer {
	char fullname[35];
	double payment;
};

typedef customer Item;

class Stack 
{
	private:
		enum {MAX = 10};
		Item items[MAX];
		int top;
	public:
		Stack();
		bool isempty() const;
		bool isfull() const;
		// push() returns false if stack is already full, true otherwise
		bool push(const Item & item); 		// add item to the stack
		// pop() returns false if stack is already empty, true otherwise
		bool pop(Item & item); 		// pop top into item
};
#endif
