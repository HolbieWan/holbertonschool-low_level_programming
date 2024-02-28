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
	int p = (lenght_string) / 2;

	if ((lenght_string % 2) == 0)
	{
		for (i = p; i < lenght_string; i++)
		{
			{
				_putchar(str[i]);
			}
		}
	}
	if ((lenght_string % 2) != 0)
	{
		for (i = n; i < lenght_string; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
