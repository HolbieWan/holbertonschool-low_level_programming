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
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i <= n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
