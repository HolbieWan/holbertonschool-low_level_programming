#ifndef print_all_h
#define print_all_h
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct print{
	char *type;
	void (*print_function)(va_list *args);
} print_struct1;

void print_all2(const char * const format, ...);

#endif
