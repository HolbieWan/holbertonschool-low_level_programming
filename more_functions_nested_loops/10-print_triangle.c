#include "main.h"

/**
*print_triangle - fonction that prints a triangle, followed by a new line.
**@size: input number
* Return: no return
*On error, O is returned, and errno is set appropriately.
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (j = 1; j <= size ; j++)
		{
			for (i = size; i > j ; i--)
			{
				_putchar(' ');
			}
			for (i = 0; i < j ; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

