#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "2-str_concat.c"

/**
 ** *string_nconcat - function that concatenates two strings
 * @s1: the 1rst string
 * @s2: the string to be concatenated up to n bytes of s2
 * @n: the number of bytes of s2 to copy onto s1
 * Return: a pointer to the concatenated string or Null on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, length_s1 = 0, length_s2 = 0;
	char *str_nconcat = NULL;

	if (s1 != NULL)
		while (s1[i] != '\0')
			length_s1 = i++;
	if (s2 != NULL)
		while (s2[j] != '\0')
			length_s2 = j++;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= length_s2)
	{
		str_nconcat = str_concat(s1, s2);
		return (str_nconcat);
	}
	if (n < length_s2)
	{
		str_nconcat = malloc((length_s1 + n + 2) * sizeof(char));
		if (str_nconcat == NULL)
			return (NULL);
		for (i = 0; i <= length_s1; i++)
		{
			str_nconcat[i] = s1[i];
		}
		for (j = 0; j < n; j++)
		{
			str_nconcat[i + j] = s2[j];
		}
		str_nconcat[i + j] = '\0';
	}
	return (str_nconcat);
}
