#include "main.h"
#include "2-strlen.c"

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
	length_string = _strlen(s);

	if (s[i] == '\0')
		return (0);

	if (c == '\0')
	{
		return (ps + length_string);
	}

	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == c)
			{
				return (ps + i);
			}
		}
	}
	return (NULL);
}
