#include "main.h"
#include "6-abs.c"
#include <limits.h>

/**
*print_last_digit - fonction that prints the last digit of a number.
** @r: The character to print
* Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int print_last_digit(int r)
{
	if (r == INT_MIN)
	{
		r = 8;
		return (r);
	}
	else
	{
		r = _abs(r) % 10;
		_putchar('0' + r);
		return (r);
	}
	return (r);
}
