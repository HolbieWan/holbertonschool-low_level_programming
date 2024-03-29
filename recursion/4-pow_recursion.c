#include "main.h"

/**
 * _pow_recursion - function that returns the value
 * of x raised to the power of y
 * @x: the number to multiply by himself
 * @y: the number of times x is multiplied by himself
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
