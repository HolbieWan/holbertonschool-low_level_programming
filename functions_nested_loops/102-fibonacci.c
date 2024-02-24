#include <stdio.h>

/**
 * main - Fonctiun that prints the first 50 Fibonacci numbers
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	int n = 50;
	/*starting_number1 = 1;
	strarting_number2 = 2;*/
	int i;
	unsigned long long int fibonacci_number1 = 1;
	unsigned long long int fibonacci_number2 = 2;
	unsigned long long int fibonacci_number_i;

	printf("%lld, %lld, ", fibonacci_number1, fibonacci_number2);

	for (i = 3; i < n - 2 ; i++)
	{
		fibonacci_number_i = fibonacci_number1 + fibonacci_number2;
		printf("%lld, ", fibonacci_number_i);
		fibonacci_number1 = fibonacci_number2;
		fibonacci_number2 = fibonacci_number_i;
	}
	printf("\n");

	return (0);
}
