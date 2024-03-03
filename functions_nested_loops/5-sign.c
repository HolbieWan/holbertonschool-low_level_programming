#include "main.h"

/**
*print_sign - fonction that prints the sign of a number.
** @n: The character to print
* Return: -1, 0 or 1 depending on the value of n
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
}
