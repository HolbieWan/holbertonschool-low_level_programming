#include "main.h"
#include "3-print_numbers.c"

/**
*more_numbers - fonction that prints the number from 0 to 14
* Return: no return
*On error, O is returned, and errno is set appropriately.
*/

void print_numbers(void);

void more_numbers(void)
{
	int i = 0;
	char j;

	while (i < 10)
	{
		print_numbers();

		for (j = '0'; j <= '4'; j++)
		{
			_putchar('1');
			_putchar(j);
		}
		i++;
		_putchar('\n');
	}
}
