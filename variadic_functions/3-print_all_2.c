#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: pointer to the string of arguments of different types
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	va_list args;

	va_start(args, format);

	while (format[j] != '\0')
	{
		if (format[j] != 'c' || format[j] != 'i'
		 || format[j] != 'f' || format[j] != 's')
		{
			;
		}
		if (format[j] == 'c')
		{
			int x = va_arg(args, int);

			printf("'%c'", x);
			printf(" ,");
		}
		else if (format[j] == 'i')
		{
			int x = va_arg(args, int);

			printf("%d", x);
			printf(" ,");
		}
		else if (format[j] == 'f')
		{
			double x = va_arg(args, double);

			printf("%f", x);
			printf(" ,");
		}
		else if (format[j] == 's')
		{
			char *x = va_arg(args, char *);

			printf(" \"%s\"", x);
		}
		j++;
	}
	printf("\n");
	va_end(args);
}
