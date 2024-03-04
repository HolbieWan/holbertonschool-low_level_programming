#include "main.h"
#include <stdio.h>

/**
 * _memcpy() function copies n bytes from memory area src to memory area dest
 * @s: the address of memory to print
 * @b: the replacing string of src to copy in dest
 * @n: The number of bytes from memory area src to replace in dest
 * Return: pointer to string dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest2 = dest;
	int i = 0;


	while (n > 0)
	{
		dest2 [i] = src[n];
		dest2++;
		n--;
	}
	return (dest);
}
