#ifndef main_h
#define main_h
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct printf{
	char *specifier;
	int (*select_function)(va_list *args);
} printf_struct;

int _printf(const char *format, ...);
int (*_print_format(const char *specifier))(va_list*);
void _putchar(char c);

#endif
