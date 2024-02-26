#include "main.h"

/**
*print_diagonal - fonction that prints a diagonal of '\'
**@n: input number
* Return: no return
*On error, O is returned, and errno is set appropriately.
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (j = 0; j < n ; j++)
		{
			for (i = 0; i < j ; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
