#include <ctype.h>
#include "main.h"

/**
*print_numbers - fonction that prints the number from 0 to 9
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
}
