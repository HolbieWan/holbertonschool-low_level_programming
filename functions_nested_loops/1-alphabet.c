#include "main.h"
/* Print alphabet in lower case */

/**
* main - main fonction that prints the text
* Return: 0 if no problem
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return;
}

