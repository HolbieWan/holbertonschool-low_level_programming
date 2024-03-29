#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *@str: inpout string to concatenate
 * Return: Always 0.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
