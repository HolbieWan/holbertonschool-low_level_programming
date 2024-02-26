#include "main.h"

/**
*print_most_numbers - fonction that prints the number from 0 to 9, except 2 & 4
* Return: no return
*On error, O is returned, and errno is set appropriately.
*/

void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{

		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
