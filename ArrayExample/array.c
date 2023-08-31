#include "array.h"

int sort_arry_in_ascending_order(int a[], int array_size)
{
    //no need to sort the array
    if(array_size < 1)
    {
        return 0;
    }
    
    for(int i = 0; i < array_size; i++)
    {
        for(int j = i + 1; j < array_size; j++)
        {
            if(a[i] > a[j])
            {
                //take temp variable
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return 1;
}

int bubble_sort_array(int a[], int array_size)
{
    //bubble sort method is short the array first with pair of elements.
    /**
     * example of bubble sort method
     * 
     * Let say we have array as a[] = {2,4,5,1,3,9,19}
     * 
     * there is 3 phase method sorting the bubble sort.
     * 
     * Phase 1
     * In this phase each elements of array is compare and sort with their next array elements.
     * Example : 2 > 4 --> No, No swap required
     *         : 4 > 5 --> No, No swap required
     *         : 5 > 1 --> Yes, Swap the elements.
     * 
     * Phase 2
     * In this phase, each elements of array should compare and if required then swap.
     * 
     * Phase 3:
     * In this phase array is already swaped but we don't know that, so run it again phase 1 and phase 2 logic
     * untill not found of swap.
     * 
    */
    
    //get the two variable of start and end
    int start = 0;
    int end   = array_size - 1;
    int temp = 0, count = 0;
    //supper loop phase 3
    while(1)
    {
        //phase 1 and phase 2
        while(start < end)
        {
            if(a[start] > a[start + 1])
            {
                temp = a[start];
                a[start] = a[start + 1];
                a[start + 1] = temp;
            }
            else
            {
                count++;
            }
            start++;
        }
        if(count == end)
        {
            break;
        }
        start = 0;
        count = 0;
    }
    return 1;
}
   