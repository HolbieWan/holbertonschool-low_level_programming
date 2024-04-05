#include "main.h"

/**
 * binary_to_uint - function that prints the binary representation of a number.
 * @n: the number to convert innto binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar(0 + '0');
	if (n == 1)
		_putchar(1 + '0');

	if (n > 0)
	{
		print_binary(n >> 1);
		_putchar ((n & 1) + '0');
	}
}
