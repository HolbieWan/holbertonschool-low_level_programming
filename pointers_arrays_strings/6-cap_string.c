#include "main.h"
#include <stdio.h>

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
		if ((str[i]) == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == ','
            || str[i] == ';' || str[i] == '!' || str[i] == '?' || str[i] == '"'
            || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}'
			|| str[i] == '.' || str[i] == '\t')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
