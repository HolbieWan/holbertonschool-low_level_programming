#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *s = "";
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i < (n - 1))
			{
				s = va_arg(args, char*);
				if (s == 0)
					printf("(nil)");
				else
					printf("%s", s);
				if (separator != NULL)
					printf("%s", separator);
			}
		}
		s = va_arg(args, char*);
		if (s == 0)
			printf("(nil)\n");
		else
			printf("%s\n", s);

		va_end(args);
	}
}
