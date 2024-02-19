#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Find the last digit */

/**
* main - main fonction that prints the text
* Return: 0 if no problem
*/
int main(void)
{
	int n=0;
	int ld = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (ld > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, ld);
	}
	if (ld == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, ld);
	}
	if (ld <= 5 && ld != 0)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}

	return (0);
}
