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
	char *ps = s;
	int lenght_s = _strlen(s);

	for (i = 0; ps[i] != '\0'; i++)
	{
		if (ps[i] == c)
		{
			return (ps + i);
		}
	}
	if (lenght_s == 0)
		return (0);

	return (NULL);
}
