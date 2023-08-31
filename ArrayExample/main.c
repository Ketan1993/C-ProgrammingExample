#include <stdio.h>
#include "array.h"

// common array print function
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

#ifdef ARRAY_SORT

	printf("before sort array \n");
	print_array_(a, a_size);

	ret = sort_arry_in_ascending_order(a, a_size);

	if (ret == 1)
	{
		printf("ascending order array \n");
		print_array_(a, a_size);
	}
#endif // ARRAY_SORT

#ifdef BUBBLE_SORT

	printf("before sort array \n");
	print_array_(a, a_size);

	bubble_sort_array(a, a_size);

	printf("bubble sort array \n");
	print_array_(a, a_size);

#endif // BUBBLE_SORT

	return 0;
}