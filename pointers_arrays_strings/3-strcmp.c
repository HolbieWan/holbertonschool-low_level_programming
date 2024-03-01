#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * _strncpy - copy a string to a buffer
 *@src: inpout string to concatenate
 *@dest: string to add to dest
 *@n: number of char to be added
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int a;
	int b;
	int c;
	int lenght_s1;
	int lenght_s2;


	lenght_s1 = _strlen(s1);
	lenght_s2 = _strlen(s2);

	for (i = 0; i <= lenght_s1 && i <= lenght_s2 ; i++)
	{
		if ((s1[i]) == (s2[i]))
		{
			a = 0;
			return (a);
		}
		if (s1[i] > s2[i])
		{
			b = s1[i] - s2[i];
			return (b);
			break;
		}
		if (s1[i] < s2[i])
		{
			c = s1[i] - s2[i];
			return (c);
			break;
		}
	}
	return (0);
}
