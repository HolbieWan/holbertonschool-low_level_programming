#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 ** _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string or Null on failure.
 */
char *_strdup(char *str)
{
	int i = 0;
	int length_str;
	char *str_dup = NULL;

	if (str == NULL)
		return (NULL);

	while (str[i] != 0)
		i++;

	length_str = i;

	str_dup = (char *)malloc(sizeof(char) * (length_str + 1));

	if ((str_dup) == 0)
		return (NULL);

	if ((length_str) == 0)
		str_dup[0] = '\0';

	for (i = 0; i < length_str; i++)
	{
		str_dup[i] = str[i];
	}

	str_dup[length_str + 1] = '\0';

	return (str_dup);
}
