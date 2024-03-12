#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 ** *malloc_checked - function that allocates memory using malloc
 * @b: the value of an unsigned int
 *
 * Return: Pointer to pointer to the allocated memory or 98 if fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
