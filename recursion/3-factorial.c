#include "main.h"

/**
 * _strlen_recursion - function that returns the factorial of a given number.
 * @n: the number to factorialize
 * Return: result
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	else
		return (n * factorial(n - 1));
}
