#include <stdio.h>
#include "string.h"

int main()
{
	#define MAX_STRING_SIZE 20
	char str1[MAX_STRING_SIZE] = "Ketan";
	char str2[MAX_STRING_SIZE];

	#ifdef __STRING_CPY
	__string_cpy(str2, str1);
	printf("string: %s\n", str2);
	#endif //__STRING_CPY
	
	return 0;
}