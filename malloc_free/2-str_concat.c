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
	int i = 0, j = 0, length_s1 = 0, length_s2 = 0;
	char *str_concatenated = NULL;

	if (s1 != NULL)
	{
		while (s1[length_s1] != '\0')
			length_s1++;
	}
	if (s2 != NULL)
	{
		while (s2[length_s2] != '\0')
			length_s2++;
	}

	str_concatenated = (char *)malloc((length_s1 + length_s2 + 1) * sizeof(char));
	if (str_concatenated == NULL)
		return (NULL);

	for (i = 0; i < length_s1; i++)
	{
		str_concatenated[i] = s1[i];
	}

	for (j = 0; j < length_s2; j++)
	{
		str_concatenated[i + j] = s2[j];
	}

	str_concatenated[i + j] = '\0';

	return (str_concatenated);
}
