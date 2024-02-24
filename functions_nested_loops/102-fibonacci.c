#include <stdio.h>

/**
 * main - Fonction that prints the first 50 Fibonacci numbers
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	int n = 50;
	/*starting_number1 = 1;
	strarting_number2 = 2;*/
	int i;
	int fibonacci_number1 = 1;
	int fibonacci_number2 = 2;
	int fibonacci_number_i;

	printf("%d, %d, ", fibonacci_number1, fibonacci_number2);

	for (i = 3; i < n - 2 ; i++)
	{
		fibonacci_number_i = fibonacci_number1 + fibonacci_number2;
		printf("%d, ", fibonacci_number_i);
		fibonacci_number1 = fibonacci_number2;
		fibonacci_number2 = fibonacci_number_i;
	}
	printf("\n");

	return (0);
}
