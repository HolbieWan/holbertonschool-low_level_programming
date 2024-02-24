#include <stdio.h>

/**
 * main - Fonction that computes and prints the sum of
 * all the multiples of 3 or 5 below n
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	int n = 1024;
	int a = 3;
	int b = 5;
	int i;
	int total = 0;

	for (i = 0; i < n ; i++)
	{
		if (i % a == 0 || i % b == 0)
		{
			total += i;
		}
	}

	printf("%d\n", total);

	return (0);
}

