#include <iostream>

void print_mice();
void print_run();

int main()
{
	print_mice();
	print_mice();
	print_run();
	print_run();

}

void print_mice()
{
	using namespace std;
	cout << "Three blind mice" << endl;
}

void print_run()
{
	using namespace std;
	cout << "See how they run" << endl;
}
