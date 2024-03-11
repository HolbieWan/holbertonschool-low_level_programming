#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 ** create_array - creates an array of chars, and initializes it with a specific char
 * @size: the size of an unsigned int
 * @c: the character to initialize the array
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i;
	char* ptr = NULL;

	ptr = (char*)malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
