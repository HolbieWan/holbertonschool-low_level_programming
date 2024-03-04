#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string to search through
 * @accept: the char to find in *s
 * Return: (numbers_of_matching char until it encounters a non matching char)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int number_of_matchings = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				number_of_matchings++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (number_of_matchings);
}
