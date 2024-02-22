#include "main.h"

/**
*add - fonction that adds two integers and returns the result.
*starting from 00:00 to 23:59.
** @n: The character to print
* Return: On success (a + b).
*On error, -1 is returned, and errno is set appropriately.
*/

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
