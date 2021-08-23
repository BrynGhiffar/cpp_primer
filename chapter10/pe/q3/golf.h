#ifndef GOLF_H_
#define GOLF_H_

class Golf
{
	static const int Len = 40;
	char fullname[Len];
	int handicap;
	public:
	// function sets golf structure to provided name, handicap
	// using values passed as arguments to the function
	Golf (const char * name = "no name", int hc = 0);

	// interactive version:
	//  function solicits name and handicap from user
	//  and sets the members of g to the values entered
	//  returns 1 if name is entered, 0 if name is empty string
	int setgolf();

	// function resets handicap to new value
	void update_handicap(int hc);

	// function displays contents of golf structure
	void showgolf() const;
};

#endif
