#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("%b\n", 98);
	printf("%b\n", 98);

	_printf("%b\n", -6);
	printf("%b\n", -6);

	return (0);
}

