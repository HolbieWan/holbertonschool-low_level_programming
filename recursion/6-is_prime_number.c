#include "main.h"
#include "5-sqrt_recursion.c"

/**
 * is_prime_number1 - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: the number to test
 * @i: the divider
 * Return: 1 if the input integer is a prime number
 */

int is_prime_number1(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0)
		return (0);

	if (i == n / 2)
		return (1);

	return (is_prime_number1(n, i + 1));
}

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: the number to test
 * Return: 1 if the input integer is a prime number
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	return (is_prime_number1(n, i + 1));
}
