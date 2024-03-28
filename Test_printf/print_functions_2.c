#include "main.h"

/**
 * print_i - function that prints an integers or an hexadecimal
 * or an octal number
 * @args: The corresponding arguments of the list
 * containing the integers to print
 * Return: number of char printed (bytes)
 */
int print_i(va_list *args)
{
	int char_count = 0;

	unsigned int n = va_arg(*args, unsigned int);

	char_count = print_number(n);

	return (char_count);
}

/**
 * print_i - function that prints an integers or an hexadecimal
 * or an octal number
 * @args: The corresponding arguments of the list
 * containing the integers to print
 * Return: number of char printed (bytes)
 */
int print_binary(int n)
{
	int char_count = 0;

	if (n < 0)
	{
		_putchar('1');
		char_count++;

		n = ~n + 1;
	}

	if (n == 0)
	{
		_putchar('0');
		char_count = 1;
		return (char_count);
	}

	if (n / 2 != 0)
	{
		char_count += print_binary(n / 2);
	}

	_putchar(n % 2 + '0');
	char_count++;

	return (char_count);
}


/**
 * print_b - function that calls a function to print binary numbers
 * @args: The corresponding arguments of the list
 * containing the integers to print
 * Return: number of char printed (bytes)
 */
int print_b(va_list *args)
{
	int char_count = 0;

	int n = va_arg(*args, int);

	char_count = print_binary(n);

	return (char_count);
}
