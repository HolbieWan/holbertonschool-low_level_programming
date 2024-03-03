#include "main.h"
#include "6-abs.c"
#include <limits.h>

/**
*print_last_digit - fonction that prints the last digit of a number.
** @r: The character to print
* Return: On success r
*/

int print_last_digit(int r)
{
	r = _abs(r % 10);
	_putchar('0' + r);
	return (r);
}
