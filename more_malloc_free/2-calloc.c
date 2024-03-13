#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: the number of elements of the array
 * @size: the size in bytes of each elements of the array
 *
 * Return: a pointer to the allocated memory or NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *calloc = NULL;

	 calloc = malloc(nmemb * sizeof(size));

	if (calloc == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	if (nmemb == 0)
		return (NULL);

	else
	{
		for (i = 0; i < size; i++)
		{
			calloc[i] = 0;
		}
	}
	return (calloc);
}
