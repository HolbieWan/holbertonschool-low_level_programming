#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that that searches for an integer
 * @array: array of pointers to functions
 * @size: size of the array
 * @cmp: pointers to the function: cmp
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	else if (size > 0)
	{
		for (i = 0; i < size && array != NULL; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
