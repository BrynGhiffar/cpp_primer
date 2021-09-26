#include "utils.h"
#include <iostream>
#include <climits>
#include <new>

static const int BUFFER_SIZE = 512;
static char buffer[BUFFER_SIZE];
int main()
{
	const int n = 2;
	chaff * arr = new (buffer) chaff[n];
	int i = 0;
	while (i < n && set_chaff(arr[i]))
		i++;
	for (int j = 0; j < i; j++)
		show_chaff(arr[j]);
}
