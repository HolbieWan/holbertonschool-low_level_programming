#include "main.h"
/* Print alphabet in lower case */

/**
* funtion: void print_alphabet(void): fonction that prints the alphabet
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

