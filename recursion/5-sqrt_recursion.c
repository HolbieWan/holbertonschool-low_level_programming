#include "main.h"
#include "4-pow_recursion.c"

/**
 * _sqrt_number - function that returns the natural square root of a number.
 * @n: the number to find the square root of
 * @racine_n: the square root to find
 * Return: the result of _sqrt_number function
 */

int _sqrt_number(int n, int racine_n)
{
	if (n < 0)
		return (-1);

	if (n == racine_n / 2)
		return (-1);

	if (n == _pow_recursion(racine_n, 2))
		return (racine_n);

	return (_sqrt_number(n, racine_n + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: the number to find the square root of
 * Return: result of the_sqrt_number function
 */

int _sqrt_recursion(int n)
{
	int racine_n = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt_number(n, racine_n));
}
