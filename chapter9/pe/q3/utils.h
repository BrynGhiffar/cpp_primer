// utils.h

#ifndef UTILS_H_
#define UTILS_H_
const int len = 20;
struct chaff
{
	char dross[len];
	int slag;
};

// sets the dross of the chaff to dr
// sets the slaf of the chaff to sl
void set_chaff(chaff & ch, const char * dr, int sl);

// prompts the user to enter the dross of the chaff and
// the slag.
int set_chaff(chaff & ch);

// prints shaft info
void show_chaff(const chaff & ch);
#endif
