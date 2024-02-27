#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a string of char in reverse
 *@s: input of function
 * Return: no return.
 */

void rev_string(char *s)
{
	int lenght_string = 0;
	int i;
	int j;
	char temp;

	while (s[lenght_string] != '\0')
	{
		lenght_string++;
	}

	for (i = 0, j = lenght_string - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

