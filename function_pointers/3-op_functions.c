#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function that calculate the somme of 2 integers
 * @a: integer
 * @b: integer
 *
 * Return: (result)
 */
int op_add(int a, int b)
{
	int result = 0;

	result = a + b;
	return (result);
}

/**
 * op_sub - function that calculate the difference of 2 integers
 * @a: integer
 * @b: integer
 *
 * Return: (result)
 */
int op_sub(int a, int b)
{
		int result = 0;

	result = a - b;
	return (result);
}

/**
 * op_mul - function that calculate the multiplication of 2 integers
 * @a: integer
 * @b: integer
 *
 * Return: (result)
 */
int op_mul(int a, int b)
{
	int result = 0;

	result = a * b;
	return (result);
}

/**
 * op_div - function that calculate the dividing of 2 integers
 * @a: integer
 * @b: integer
 *
 * Return: (result)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}

/**
 * op_mod - function that calculate the modulo of 2 integers
 * @a: integer
 * @b: integer
 *
 * Return: (result)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}
