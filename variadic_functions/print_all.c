#include "print_all.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


void print_char2 (va_list *args)
{
	char c;

	c = va_arg(*args, int);
	printf("%c", c);
}

void print_integers2 (va_list *args)
{
	int integer;

	integer = va_arg(*args, int);
	printf("%d", integer);
}

void print_float2(va_list *args)
{
	double fl;

	fl = va_arg(*args, double);
	printf("%f", fl);
}

void print_string2(va_list *args)
{
	char *str = "";

	if (str == NULL)
		printf("(nil)");
	else
	{
		str = va_arg(*args, char*);
		printf("%s", str);
	}
}

void print_all2(const char * const format, ...)
{
	print_struct1 print_all_struct[] = {
		{"c", print_char2},
		{"i", print_integers2},
		{"f", print_float2},
		{"s", print_string2},
		{NULL, NULL}
	};

	int i = 0;
	int j;
	char *separator = "";

	va_list args;
	va_start (args, format);

	while(format != NULL && format[i] != '\0')
	{
		j = 0;

		while (print_all_struct[j].type != NULL )
		{
			if (*print_all_struct[j].type == format[i])
			{
				printf("%s", separator);
				print_all_struct[j].print_function(&args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end (args);
}
