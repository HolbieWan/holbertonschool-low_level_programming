#include "main.h"
#include "2-strlen.c"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string to search through
 * @accept: the char to find in *s
 * Return: (numbers_of_matching char until it encounters a non matching char)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		if (accept[j] == '\0')
		{
			return (NULL);
			break;
		}
	}
	return (s + i);
}
