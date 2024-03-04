#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: the address of memory to print
 * @src: the replacing string of src to copy in dest
 * @n: The number of bytes from memory area src to replace in dest
 * Return: pointer to string dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest2 = dest;
	unsigned int i;
	unsigned int j;

	for (i = 0, j = 0; j < n; j++, i++)
	{
		dest2[i] = src[j];
	}
	return (dest);
}
