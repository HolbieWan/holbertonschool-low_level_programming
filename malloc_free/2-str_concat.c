#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 ** *str_concat - function that concatenates two strings
 * @s1: the 1rst string
 * @s2: the string to be concatenated
 * Return: a pointer to the concatenated string or Null on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, length_s1, length_s2, length_str_concatenated;
	char *str_concatenated = NULL;

	while (s1[i] != '\0')
		i++;
	length_s1 = i;

	while (s2[j] != '\0')
		j++;
	length_s2 = j;

	str_concatenated = (char *)malloc(sizeof(char) * (length_s1 + length_s2 + 1));

	if ((str_concatenated) == 0)
		return (NULL);

	length_str_concatenated = length_s1 + length_s2;

	if ((length_str_concatenated) == 0)
		str_concatenated[0] = '\0';

	for (i = 0; i < length_s1; i++)
	{
		str_concatenated[i] = s1[i];
	}
	for (j = 0; j < length_s2; j++)
	{
		str_concatenated[i + j] = s2[j];
	}

	str_concatenated[length_str_concatenated + 1] = '\0';

	return (str_concatenated);
}
