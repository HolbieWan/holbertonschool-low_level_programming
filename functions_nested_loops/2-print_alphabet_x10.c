#include "main.h"
/** Print alphabet in lower case */
void print_alphabet(void);
/**
*print_alphabet - fonction that prints the alphabet
* Return: void
*/
void print_alphabet_x10(void)
{
	int i = 0;
	for (; i != 10; i++)
	{
		print_alphabet();
	}
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
