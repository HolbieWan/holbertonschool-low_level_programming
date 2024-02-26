#include <ctype.h>
#include "main.h"

/**
*void print_numbers - fonction that checks for lowercase character
** @i: char to print
* Return: no return
*On error, O is returned, and errno is set appropriately.
*/

void print_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
