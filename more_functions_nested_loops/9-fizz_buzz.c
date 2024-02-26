#include "main.h"

/**
*print_square - fonction that prints a square
**@size: input number
* Return: no return
*On error, O is returned, and errno is set appropriately.
*/

int main(void)
{
	int i;

	printf("1");

	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 && i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
    return (0);
}
