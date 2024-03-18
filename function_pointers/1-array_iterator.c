#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array
 * @array: array of pointers to functions
 * @size: size of the array
 * @action: pointers to the function: action
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
