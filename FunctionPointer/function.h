#ifndef MY_FUNCTION__H_INCL
#define MY_FUNCTION__H_INCL
#include <stdio.h>
#include <stdlib.h>

/*callback function */
typedef void (*FunctionPtrCallback)(int x);

/* Display value */
void print_int(int a);

/* register callback */
void display_value(int x, FunctionPtrCallback callback);

#endif // MY_FUNCTION__H_INCL
