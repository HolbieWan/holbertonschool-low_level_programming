#include "main.h"
#include "2-strlen.c"

/**
 * print_array - prints a string of char in reverse
 *@a: array of int
 *@n: number of elements
 * Return: no return.
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d,", a[i]);
		i++;
	}
	if (i == n - 1)
	{
		printf("%d", a[i]);
	}
}


