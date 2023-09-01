#include <stdio.h>
#include "string.h"

int main()
{
	#define MAX_STRING_SIZE 20
	char str1[MAX_STRING_SIZE] = "Ketan";
	
	delete_char_in_string(str1, 1);
	printf("String: %s\n", str1);
	return 0;
}