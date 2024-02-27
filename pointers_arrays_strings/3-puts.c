#include "main.h"

/**
 * _puts - prints a string of char
 *@str: input of function
 * Return: no return.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
