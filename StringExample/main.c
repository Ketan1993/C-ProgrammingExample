#include <stdio.h>
#include "my_string.h"

int main()
{

#define MAX_STRING_SIZE 20
	char str1[MAX_STRING_SIZE] = "Ketan";

#ifdef STRING_LEN
	int len = string_len(str1);
	printf("String Length %d\n", len);
#endif // STRING_LEN

	return 0;
}