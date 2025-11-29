#include "function.h"

void print_int(int a)
{
     printf("value of a is: %d\n", a);    
}

void display_value(int x, FunctionPtrCallback callback)
{
    if(callback != NULL)
    {
    	callback(x);
    }
}
