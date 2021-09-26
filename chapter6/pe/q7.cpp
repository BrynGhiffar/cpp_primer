#include <iostream>
#include <cstring>
#include <cctype>
const int MAXWORD = 20;
int main()
{
	using namespace std;

	cout << "Enter words (q to quit):\n";
	char word[MAXWORD];
	int vowel_count = 0;
	int conso_count = 0;
	int other_count = 0;
	while (cin >> word && strcmp(word, "q"))
	{
		if (isalpha(word[0])){
			word[0] = tolower(word[0]);
			switch(word[0])
			{
				case 'a' :
				case 'i' :
				case 'u' :
				case 'e' :
				case 'o' :
					vowel_count++;
					break;
				default :
					conso_count++;
					break;
			}
		} else
			other_count++;
	}
	cout << vowel_count << " words beginning with vowels\n";
	cout << conso_count << " words beginning with consonants\n";
	cout << other_count << " others\n";
}
