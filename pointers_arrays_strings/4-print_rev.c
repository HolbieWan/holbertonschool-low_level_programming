#include "main.h"
#include "2-strlen.c"

/**
 * _puts - prints a string of char in reverse
 *@s: input of function
 * Return: no return.
 */

void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
