#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * _strcmp - copy a string to a buffer
 *@s1: inpout string to concatenate
 *@s2: string to add to dest
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;
	int lenght_s1;
	int lenght_s2;


	lenght_s1 = _strlen(s1);
	lenght_s2 = _strlen(s2);

	for (i = 0; i <= lenght_s1 && i <= lenght_s2 ; i++)
	{
		if ((s1[i]) == (s2[i]))
		{
			diff = 0;
		}
		if (s1[i] > s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		if (s1[i] < s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
	}
	return (diff);
}
