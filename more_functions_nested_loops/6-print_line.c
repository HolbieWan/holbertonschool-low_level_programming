#include "main.h"

/**
*print_line - fonction that prints a line of n '_'
**@n: input number
* Return: no return
*On error, O is returned, and errno is set appropriately.
*/

void print_line(int n)
{
	int i = 0;
	char j = '_';

	while (i < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(j);
		}
		i++;
	}
	_putchar('\n');
}
