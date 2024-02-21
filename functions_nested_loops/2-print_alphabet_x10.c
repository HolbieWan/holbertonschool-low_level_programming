#include "main.h"
#include "1-alphabet.c"
/** Print alphabet in lower case x10 */

/**
*print_alphabet_x10 - fonction that prints the alphabet 10 times
* Return: void
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i ++;
	}
}

