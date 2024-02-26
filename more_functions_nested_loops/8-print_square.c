#include "main.h"

/**
*print_square - fonction that prints a square
**@size: input number
* Return: no return
*On error, O is returned, and errno is set appropriately.
*/

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (j = 0; j < size ; j++)
		{
			for (i = 0; i < size ; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
