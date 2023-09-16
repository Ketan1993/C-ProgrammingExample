#include <stdio.h>
#include "string_.h"

int main()
{

#define MAX_STRING_SIZE 20
	char str1[MAX_STRING_SIZE] = "Ketan";

#ifdef STRING_REVERSE
	string_reverse(str1);
	printf("reverse string %s\n", str1);
#endif // STRING_REVERSE

	return 0;
}