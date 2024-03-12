#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 ** free_grid -function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: The multidimensionnal array
 * @height: the width of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0, j = 0;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i ; j++)
			free(grid[j]);

		free(grid);
	}
}
