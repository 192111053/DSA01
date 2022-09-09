#include <iostream>

using namespace std;

int vowelCount(char *sptr)
{
	int count = 0;

	while ((*sptr) != '\0') {

		if (*sptr == 'a' || *sptr == 'e' || *sptr == 'i'
			|| *sptr == 'o' || *sptr == 'u') {

			count++;
		}

		sptr++;
	}

	return count;
}

int main()
{
	char str[] = "naseerahmed";

	cout << "Vowels in above string: " << vowelCount(str);

	return 0;
}

