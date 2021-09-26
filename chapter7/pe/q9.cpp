#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array element
// filled.
int getinfo(student pa[], int n);

// display1() takes a student structure as an argument
// and displays its contents
void display1(student st);

// display2() takes the address of student structure as an
// argument and displays the structure's contents
void display2(const student * ps);

// display3() takes the address of the first elements of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures.
void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	return 0;
}

int getinfo(student pa[], int n)
{
	int i = 0;
	cout << "Student #" << (i + 1) << ":\n";
	cout << "Enter fullname: ";
	cin.getline(pa[i].fullname, SLEN);
	// cout << (pa[i].fullname[0] != '\n') << endl;
	// cout << n << endl;
	// cout << (i < n) << endl;
	while (pa[i].fullname[0] && i < n)
	{
		cout << "Enter hobby: ";
		cin.getline(pa[i].hobby, SLEN);
		cout << "Enter ooplevel: ";
		(cin >> pa[i].ooplevel).get();
		i++;
		if (i < n)
		{
			cout << "Student #" << (i + 1) << ":\n";
			cout << "Enter fullname: ";
			cin.getline(pa[i].fullname, SLEN);
		}
	}
	// cout << i << endl;
	return i;
}

void display1(student st)
{
	cout << "fullname: " << st.fullname
		<< endl;
	cout << "hobby: " << st.hobby
		<< endl;
	cout << "ooplevel: " << st.ooplevel
		<< endl;
}

void display2(const student * ps)
{
	cout << "fullname: " << ps->fullname
		<< endl;
	cout << "hobby: " << ps->hobby
		<< endl;
	cout << "ooplevel: " << ps->ooplevel
		<< endl;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
		display2(pa + i);
}
