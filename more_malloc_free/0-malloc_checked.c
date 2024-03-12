#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 ** *malloc_checked - function that allocates memory using malloc
 * @b: the size of an unsigned int
 *
 * Return: Pointer to pointer to the allocated memory or 98 if fails
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = NULL;

	ptr = malloc(sizeof(b));

	if (ptr == NULL)
	{
		*ptr = 98;
		return (ptr);
	}
	else
		return (ptr);
}
