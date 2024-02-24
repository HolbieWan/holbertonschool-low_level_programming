#include <stdio.h>

/**
 * main - Fonctiun that finds and prints the sum of the even-valued terms
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

unsigned long int fibonacci(int n);

int main(void)
{
	unsigned long int limit = 4000000;
	int n = 50;
	int i;
	unsigned long int even_fibonacci1_sum = 0;
	unsigned long int fibonacci_number_i;

	for (i = 3; i <= n; i++)
	{
		fibonacci_number_i = fibonacci(i);

		if (fibonacci_number_i > limit)
			break;

		if (fibonacci_number_i % 2 == 0)
		{
			even_fibonacci1_sum += fibonacci_number_i;
		}
	}
	printf("%ld\n", fibonacci_number_i);

	return (0);
}

unsigned long int fibonacci(int n)
{
	unsigned long int fibonacci_number1 = 1;
	unsigned long int fibonacci_number2 = 2;
	unsigned long int fibonacci_number_i;

	if (n == 1 || n == 2)
		return (1);

	for (int i = 3; i <= n; i++)
	{
		fibonacci_number_i = fibonacci_number1 + fibonacci_number2;
		fibonacci_number1 = fibonacci_number2;
		fibonacci_number2 = fibonacci_number_i;
	}
	return (fibonacci_number_i);
}
