#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list args);
void print_integers(va_list args);
void print_float(va_list args);
void print_str(va_list args);
void print_all(const char * const format, ...);

/**
 * print_char - function that prints a char
 * @args: a pointer to the char to be printed
 *
 * Return: void
 */
void print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);

	printf("%c", ch);
}

/**
 * print_integers - function that prints a number
 * @args: a pointer to the int to be printed
 *
 * Return: void
 */
void print_integers(va_list args)
{
	int in;

	in = va_arg(args, int);

	printf("%d", in);
}

/**
 * print_float - function that prints a float
 * @args: a pointer to the float to be printed
 *
 * Return: void
 */
void print_float(va_list args)
{
	double fl;

	fl = va_arg(args, double);

	printf("%f", fl);
}

/**
 * print_str - function that prints a string
 * @args: a pointer to the string to be printed
 *
 * Return: void
 */
void print_str(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - function that prints anything
 * @format: pointer to the string of arguments of different types
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	print_func pr_all[] = {
		{"c", print_char},
		{"i", print_integers},
		{"f", print_float},
		{"s", print_str}
	};

	int i = 0;
	int j;
	char *separator = ", ";

	va_list args;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (j < 4 && (format[i] != pr_all[j].type[0]))
		{
			j++;
		}
		if (j < 4)
		{
			pr_all[j].print_func(args);
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
