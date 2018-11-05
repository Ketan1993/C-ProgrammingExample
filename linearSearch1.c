#include <stdio.h>
#include <stdint.h>

/* Linear search logic
  1. enter the array size 
  2. get the array element from the input
  3. get the search number which is need to search in array
  4. run the loop first to last index of array to find out the search number 
  5. if array index will match with the search number break the loop and print the position of index and search number
  6. if not match print the error message
  7. exit the program
*/

#define MAX_LEN        30
typedef struct linearSeach{
	int buffer[MAX_LEN];
	int buf_size;
	int search_num;
}linearSeach;

int main(void)
{
	// define structure object
	linearSeach linerSrch;
	
	printf("Enter the array size\n");

	//read the user input
	scanf("%d", &linerSrch.buf_size);
	
	
	printf("Enter the array elements\n");

	int i, flag = 0;
	
	for(i = 0; i < linerSrch.buf_size; i++)
	{
		//read the user input
		scanf("%d", &linerSrch.buffer[i]);
	}
	
	linerSrch.buffer[linerSrch.buf_size + 1] = '\0';
	
	printf("Enter the number to search in array\n");
	
	// get the search number from the input
	scanf("%d", &linerSrch.search_num);
	
	for( i = 0; i < linerSrch.buf_size; i++)
	{
		if(linerSrch.buffer[i] == linerSrch.search_num)
		{
			printf("Search number position is = %d and number is = %d\n", i + 1, linerSrch.buffer[i]);
			flag = 1;
   	    }
	}
	if(!flag)
	{
		printf("Entered searched number is not existing in the array list\n");
	}
	
	return 0;
}
