#include "main.h"
/* Print alphabet in lower case */

/**
* void print_alphabet(void): fonction that prints the text
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

}

