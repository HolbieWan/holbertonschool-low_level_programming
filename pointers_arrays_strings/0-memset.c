#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte.
 * @s: the address of memory to print
 * @b: the replacing char to stock in the string
 * @n: The number of times to add @b
 * Return: pointer to string s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *dst = s;

	while (n > 0)
	{
		*dst = b;
		dst++;
		n--;
	}
	return (s);
}

