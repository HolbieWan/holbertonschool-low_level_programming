#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *@str: inpout string to concatenate
 * Return: Always 0.
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != ('\0'))
	{
		if ((str[i]) == (' '))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}
