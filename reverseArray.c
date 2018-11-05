#include <stdio.h>

int main(void)
{
	int getSize;
	int i;
	
	// print the message for the array size
	printf("Enter the array Size\n");
	scanf("%d", &getSize);
	int storeNumber[getSize];


	printf("Enter the array element\n");
	
	do{
		//get the number from the input
		scanf("%d", &storeNumber[i]);
		i++;
	}while( i < getSize);
	
	//now print the array data
	printf("total element in the array is = ");
	for( i = 0; i < getSize; i++)
	{
		printf("%d", storeNumber[i]);
	}
	//find the last element index;
    int lastIndex = i - 1;
    // first index will start as a zero
    int firstIndex = 0;
    while (firstIndex < lastIndex)
    {
    	/* logic step
    	   1. store the data in the array
    	   2. find out the last index of array
    	   3. store the first index data into the other varible so we can move it into the last index
    	   4. afte the 3rd step first index will be empty to we can put last index to first index
    	   5. and restore the first index data at the last index
    	   6. repeat the 3, 4, 5 step again till first index < last index
    	   7. print the new array using loop condition 
		*/
    	int temp = storeNumber[firstIndex];
    	storeNumber[firstIndex] = storeNumber[lastIndex];
    	storeNumber[lastIndex] = temp;
    	firstIndex++;
    	lastIndex--;
    }
    
    printf("\nRevers array is = ");
    for( i = 0; i < getSize; i++)
    {
    	printf("%d",storeNumber[i]);
    }
}
