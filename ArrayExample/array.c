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
   