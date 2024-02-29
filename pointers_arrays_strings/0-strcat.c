#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * _strcat - check the code
 *@src: inpout string to concatenate
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int lenght_text_dest;
	int lenght_text_src;
	int i = 0;

	while (dest[i] != ' ')
	{
		i++;
	}
	lenght_text_dest = i + 1;
	lenght_text_src = _strlen(src);

	for (i =  0; i <= lenght_text_src; i++)
	{
		dest[lenght_text_dest + i] = src[i];
	}
	return (dest);
}
