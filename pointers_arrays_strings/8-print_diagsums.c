#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: the pointer to the 1 dimensional array to be calculated
 * @size: the size of the square matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;

	int somme_diag1 = 0;
	int somme_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		somme_diag1 += a[i * size + i];
		somme_diag2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", somme_diag1, somme_diag2);
}
