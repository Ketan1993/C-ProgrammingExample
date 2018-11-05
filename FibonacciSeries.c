#include <stdio.h>

static int addNumber(int number)
{
   if(number == 0|| number == 1)
      return number;
    else
      return(addNumber(number - 1) + addNumber(number - 2));
}

int main()
{
	int Fobnumber = 0, Starpoint =0;
	int sum = 0;
	
	printf("Enter the number \n");
	scanf("%d", &Fobnumber);
	
	if(Fobnumber < 0)
	{
		printf("This not a nature number\n");
		return 0;
	}
	
    while (Starpoint < Fobnumber)
    {
       sum = addNumber(Starpoint);
       printf("%d\n",sum);
       Starpoint++;
    }
    return 0;
}
