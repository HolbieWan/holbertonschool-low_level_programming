#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the string to search through
 * @c: the char to find in *s
 * Return: (s + i): a pointer to the first occurrence of the character
 * returns NULL if char not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
