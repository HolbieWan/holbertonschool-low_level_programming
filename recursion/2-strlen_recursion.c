#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: the address of first letter of the string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int lenght_string = 0;

	if (*s == '\0')
	{
		return (0);
	}
	if (*s != '\0')
	{
		lenght_string++;
		lenght_string += _strlen_recursion(s + 1);
	}
	return (lenght_string);
}
