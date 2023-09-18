# C Programming Example
This folder is set of program of string handling process. it's include example of string copy, string compare, char delete etc.

## Build Program
Example is created using Makefile option. you can use any make file builder tool to build the program.
Makefile is design such a way that, the output of the builder will be copy to build directory. 

Use following command to build the program

```
$ make

$ make clean

```

## Run Program
See Build directory to run the program.

Use following command to run the executed program file.

`$ ./app.exe`

## List of Example
Following program is availabe in String Example.


```
    1. To Copy string from source to destination use __string_cpy() function.
    2. To Delete char from givin position use delete_char_in_string() function.
    3. To Reverse the string use string_reverse() function.
    4. To get the string len use string_len() function.


```

## Configure Program
You can enable the program by define the particular `#define ` See `string.h` for defination.
Function name is created as per the program example. 

See below example for string copy.

```
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

```

	
