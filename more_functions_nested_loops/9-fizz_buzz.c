#include "main.h"

/**
*print_square - fonction that prints the numbers from 1 to 100,
*followed by a new line. But for multiples of three print Fizz instead of
*the number and for the multiples of five print Buzz.
*For numbers which are multiples of both three and five print FizzBuzz.
**@: input number
* Return: no return
*On error, O is returned, and errno is set appropriately.
*/

int main(void)
{
	int i;

	printf("1");

	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);

}
