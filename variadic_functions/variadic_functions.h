#ifndef variadic_funtions_h
#define variadic_funtions_h
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct print {
	char *type;
	void (*print_func)(va_list *args);
} print_func;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
