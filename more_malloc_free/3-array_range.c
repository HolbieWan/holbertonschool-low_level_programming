#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers
 * @min: the first int of the array
 * @max: the last int of the array
 *
 * Return: a pointer to the newly created array or NULL if failed
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *array_r;
	int number_of_integers = 0;


	if (min > max)
		return (NULL);

	for (i = min;  i <= max ; i++)
		number_of_integers++;

	array_r = malloc(number_of_integers * sizeof(int));

	if (array_r == NULL)
		return (NULL);

	for (i = 0; i <= number_of_integers; i++)
		array_r[i] = min + i;

	return (array_r);
}
