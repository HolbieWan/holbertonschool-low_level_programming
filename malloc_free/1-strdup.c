#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 ** _strdup() - function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	int i = 0;
	int length_str;
	char *str_dup = NULL;

	while (str[i] != 0)
		i++;

	length_str = i;

	str_dup = (char *)malloc(sizeof(char) * length_str);

	if (str_dup == NULL)
		return (NULL);

	if ((length_str) == 0)
		return (NULL);

	else
	{
		for (i = 0; i < length_str; i++)
		{
			str_dup[i] = str[i];
		}
	}
	return (str_dup);
}
