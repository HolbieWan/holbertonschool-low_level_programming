#include <stdio.h>

/**
 * main - Functiun that finds and prints the sum of the even-valued terms
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

unsigned long int fibonacci(int n);

int main(void)
{
	unsigned long int limit = 4000000;
	int i = 1;
	unsigned long int even_fibonacci_sum = 0;
	unsigned long int fibonacci_number_i;

	while (1)
	{
		fibonacci_number_i = fibonacci(i);

		if (fibonacci_number_i > limit)
			break;

		if (fibonacci_number_i % 2 == 0)
		{
			even_fibonacci_sum += fibonacci_number_i;
		}

		i++;
	}

	printf("%lu\n", even_fibonacci_sum);

	return (0);
}

/**
 * fibonacci - Function that prints the first 50 Fibonacci numbers
 * @n: The number of occurences
 * Return: On success fibonacci_number_i.
 * On error, -1 is returned, and errno is set appropriately.
 */

unsigned long int fibonacci(int n)
{
	unsigned long int fibonacci_number1 = 1;
	unsigned long int fibonacci_number2 = 1;
	unsigned long int fibonacci_number_i;
	int i;

	if (n == 1 || n == 2)
		return (1);

	for (i = 3; i <= n; i++)
	{
		fibonacci_number_i = fibonacci_number1 + fibonacci_number2;
		fibonacci_number1 = fibonacci_number2;
		fibonacci_number2 = fibonacci_number_i;
	}

	return (fibonacci_number_i);
}
