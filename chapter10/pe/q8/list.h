#ifndef LIST_H_
#define LIST_H_
typedef int T;
class List
{
	static const int LEN = 10;
	T arr[LEN];
	int size;
	public:
	List() {size = 0;}
	bool isempty() const;
	bool isfull() const;
	// adds item T into the array
	// returns if the addition succeeds
	// and falls otherwise.
	void add(const T & item);
	// applies function pf to every item in
	// the List
	void visit(void (*pf) (T &));
};
#endif
