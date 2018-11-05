#include <stdio.h>
#include <stdint.h>

#define SELECT_LOGIC   2

int main()
{
   int swapNum1 = 0;
   int swapNum2 = 0;
   int temp = 0;
   
 
   printf("Enter the two number to swap each other\n");
   
  
   printf("Enter the first Number\n");
    //read the input from the console
   
   scanf("%d", &swapNum1);
   
   printf("Enter the Second Number\n");
    //read the input from the console
   
   scanf("%d", &swapNum2);
   
   printf("Enter Number 1 = %d\nEnter Number 2 = %d\n", swapNum1, swapNum2);
   //check for the positive number
   
   if(swapNum1 < 0 || swapNum2 < 0)
   { 
     printf("Enter number is not positive number\n");
   	 return 0;
   }
   
    #if SELECT_LOGIC == 1 
   
   /* swap number logic :
    ex : num1 = 10, num2 = 20
     so as per the below logic result whoud be 
      30     =  10     +   20
   swapNum1 = swapNum1 + swapNum2;
      10    =  30      -  20   
   swapNum2 = swapNum1 - swapNum2;
       20     =  30    -  10     
   swapNum1 = swapNum1 - swapNum2;
   */
   
     /*Logic 1*/
  
   //swap the number 
   swapNum1 = swapNum1 + swapNum2;
   swapNum2 = swapNum1 - swapNum2;
   swapNum1 = swapNum1 - swapNum2;
   
   #endif
   
     /*Logic 2*/
   #if SELECT_LOGIC == 2 
     
     /* swap number logic :
       ex : num1 = 10, num2 = 20
       so as per the below logic result whoud be 
        30       =  20
        temp     = swapNum2;
        10       = 10
        swapNum2 = swapNum1;
        20       = 20
        swapNum1 = temp;
    */
        
   //swap the number using temp variable
     
     temp     = swapNum2;
	 swapNum2 = swapNum1;
	 swapNum1 = temp;
	 
   #endif
   
   printf("swap number 1 = %d\nswap number 2 = %d\n", swapNum1, swapNum2);
   
}
