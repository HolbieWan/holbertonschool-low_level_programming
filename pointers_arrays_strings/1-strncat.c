#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * _strncat - check the code
 *@src: inpout string to concatenate
 *@dest: string to add to dest
 *@n: number of char to be added
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lenght_text_dest;
	int i = 0;

	lenght_text_dest = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[lenght_text_dest + i] = src[i];
	}
	dest[lenght_text_dest + i] = '\0';

	return (dest);
}
