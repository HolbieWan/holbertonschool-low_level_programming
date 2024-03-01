#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * reverse_array - reverse an array of n elements
 *@a: inpout string to concatenate
 *@n: number elements of the array
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
