#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * int_index - function that that searches for an integer
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
 * int_index - function that that searches for an integer
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
 * int_index - function that that searches for an integer
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
 * int_index - function that that searches for an integer
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
 * int_index - function that that searches for an integer
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
