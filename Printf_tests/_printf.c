#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout.
 * @c: character to print.
 * Return: void
 */
void _putchar(char c)
{
    write(1, &c, 1);
}
/**
 * _strlen - function counts the lenght of a string
 * @str: the string to be counted
 *
 * Return: the lenght of the string without the null termination
 */
int _strlen(const char *str)
{
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return (length);
}
/**
 * print_char - function that prints a char
 * @args: a pointer to the char to be printed
 *
 * Return: void
 */
int print_char(va_list *args)
{
    char ch;
    ch = va_arg(*args, int);
    _putchar(ch);
    return (1);
}
/**
 * print_integers - function that prints a number
 * @args: a pointer to the int to be printed
 *
 * Return: void
 */
int print_integers(va_list *args)
{
    int in;
    in = va_arg(*args, int);
    putchar('0' + in);
    return (1);
}
/**
 * print_float - function that prints a float
 * @args: a pointer to the float to be printed
 *
 * Return: void
 */
int print_float(va_list *args)
{
    double fl;
    fl = va_arg(*args, double);
    printf("%f", fl);
    return (5);
}
/**
 * print_str - function that prints a string
 * @args: a pointer to the string to be printed
 *
 * Return: void
 */
int print_str(va_list *args)
{
    int count, i = 0;
    char *str;

    str = va_arg(*args, char *);

    for (i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
        count++;
    }
    return (count);
}
/**
 * print_all - function that prints anything
 * @format: pointer to the string of arguments of different types
 *
 * Return: void
 */
int (*_print_format(const char *specifier))(va_list*)
{
	printf_struct print_specifier[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_integers},
		{"f", print_float},
		{NULL, NULL}
	};
	unsigned int i = 0;

if (*specifier != 'c' && *specifier != 's' && *specifier != 'd' && *specifier != 'f')
	{
		printf("Error\n");
		exit(99);
	}

while ((print_specifier[i].specifier != NULL && print_specifier[i].specifier[0] != *specifier))
	{
		i++;
	}
	return (print_specifier[i].select_function);
}
/**
 * print_all - function that prints anything
 * @format: pointer to the string of arguments of different types
 *
 * Return: void
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int char_count = 0;
	char new_line = '\n';

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
			return (-1);

	va_start(args, format);
	while (format[i] != '\0')
	{
		if(format[i] != '%')
		{
			_putchar(format[i]);
			char_count++;
		}
		else if (format[i + 1] == '%')
		{
			_putchar(format[i]);
			char_count++;
			i++;
		}
		else
		{
			(*_print_format(&format[i + 1])) (&args);
			char_count ++;
			i++;
		}
		i++;
	}
	putchar(new_line);
	va_end(args);
	return (char_count);
	}
