// 9.7 twofile1.cpp -- variables with external and internal linkage
#include <iostream> 			// to be compiled with twofile2.cpp
int tom = 3;							// external variable definition
int dick = 30;						// external variable definition
static int harry = 300;		// static, interal linkage

// function prototype
void remote_access();

int main()
{
	using namespace std;
	cout << "main() reports the following addresses:\n";
	cout << "&tom\t" << &tom << endl;
	cout << "&dick\t" << &dick << endl;
	cout << "&harry\t" << &harry << endl;
	remote_access();
	return 0;
}
