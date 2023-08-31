#include "array.h"

int main()
{
	int a[] = {1, 5, 2, 4, 3, 10, 6};
	int a_size = sizeof(a) / sizeof(a[0]);

#ifdef ARRAY_SORT
	int ret = sort_arry_in_aascending_order(a, a_size);

	if (ret == 1)
	{
		for (int i = 0; i < a_size; i++)
		{
			printf("%d ", a[i]);
		}
	}
#endif // ARRAY_SORT

	return 0;
}