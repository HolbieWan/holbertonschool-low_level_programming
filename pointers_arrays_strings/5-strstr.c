#include "main.h"

/**
 * _strpbrk - function that locates a substring
 * @haystack: the string to search through
 * @needle: the substriing to search for in *s
 * Return: a pointer to the beginning of the located substring,
 *or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
