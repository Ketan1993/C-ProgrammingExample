# C Programming Example
This folder is set of program for the Array handling. it's includes array sort method, bubble sort, library seach etc.

## Build Program
Example is created using Makefile option. you can use any make file builder tool to build the program.
Makefile is design such a way that, the output of the builder will be copy to build directory. 

Use following command to build the program

`$ make`
`$ make clean`

## Run Program
See Build directory to run the program.

Use following command to run the executed program file.

`$ ./app.exe`

## Configure Program
You can enable the program by define the particular `#define MACRO` See `array.h` for defination.
Function name is created as per the program example. 

See below example for bubble sort method.

`// common array print function
// pass array
// pass length of array
static void print_array_(int a[], int size);

static void print_array_(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main()
{
	int ret = 0;
	int a[] = {1, 5, 2, 4, 3, 10, 6};
	int a_size = sizeof(a) / sizeof(a[0]);
    
#ifdef BUBBLE_SORT

	printf("array before sort\n");
	print_array_(a, a_size);

	bubble_sort_array(a, a_size);

	printf("bubble sort array \n");
	print_array_(a, a_size);

#endif // BUBBLE_SORT

	return 0;
} `

	