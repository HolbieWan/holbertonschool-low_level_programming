#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 *@str: inpout string to capitalize
 * Return: Always 0.
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}

	while (str[i] != ('\0'))
	{
		if ((str[i]) == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == ','
			|| str[i] == ';' || str[i] == '!' || str[i] == '?' || str[i] == '"'
			|| str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}'
			|| str[i] == '.')
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
