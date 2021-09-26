#include <iostream>
#include <cstring>
using namespace std;

const int STR_LIM = 40;

struct CandyBar {
	char brand_name[STR_LIM + 1];
	float weight;
	int calories;
};

void do_set(CandyBar & bar, const char * str = "Millenium Munch", 
						float w = 2.85f, int c = 350);
void show(const CandyBar & bar);

int main()
{
	CandyBar my_fav, rand;
	do_set(my_fav, "Hershey's", 0.5f, 120);
	do_set(rand);
	show(my_fav);
	show(rand);
	return 0;
}

void do_set(CandyBar & bar, const char * str, float w, int c)
{
	int n = strlen(str);
	for (int i = 0; i < n + 1 && i < STR_LIM + 1; i++) // copy the null terminator
		bar.brand_name[i] = str[i];
	bar.weight = w;
	bar.calories = c;
}

void show(const CandyBar & bar)
{
	cout << "Brand Name: " << bar.brand_name << endl;
	cout << "Weight: " << bar.weight << endl;
	cout << "Calories: " << bar.calories << endl;
}
