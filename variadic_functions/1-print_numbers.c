#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int x = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		printf("\n");

	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		{
			x = va_arg(args, int);
			printf("%d", x);
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	x = va_arg(args, int);
	printf("%d\n", x);

	va_end(args);
}
