#include "main.h"

/**
*_print_sign - fonction that prints the sign of a number.
** @n: The character to print
* Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
