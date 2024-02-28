#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints a string of char in reverse
 *@str: input of function
 * Return: no return.
 */

void puts_half(char *str)
{
	int lenght_string = _strlen(str);
	int i = 0;
	int n = (lenght_string - 1) / 2;

	while (i < lenght_string)
	{
		if ((lenght_string % 2) == 0)
		{
			_putchar(str[i + (lenght_string / 2)]);
		}
		if ((lenght_string % 2) != 0)
		{
			_putchar(str[i + n]);
		}
		i++;
	}
	_putchar('\n');
}
