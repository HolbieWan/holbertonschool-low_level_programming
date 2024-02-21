#include "main.h"
/** Print alphabet in lower case x10 */
void print_alphabet(void);
/**
*print_alphabet_x10 - fonction that prints the alphabet 10 times
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
