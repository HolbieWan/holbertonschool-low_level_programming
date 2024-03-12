#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 ** **alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: The height of the grid
 * @height: the width of the grid
 * Return: returns a pointer to a 2 dimensional array
 * of integers or Null on failure.
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **array;

	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
