#include "main.h"

/**
*jack_bauer - fonction that prints every minute of the day of Jack Bauer,
*starting from 00:00 to 23:59.
** @: The character to print
* Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

void times_table(void)
{
	int num1;
	int num2;
	int result;
	int digit1;
	int digit2;

	for (num1 = 0; num1 < 10 ; num1++)
	{
		for (num2 = 0; num2 < 10 ; num2++)
		{
			result = (num1 * num2);
			digit1 = result / 10;
			digit2 = result % 10;

			if (result < 10 )
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
				_putchar(',');
			}
			if (result >= 10 )
			{
				_putchar(' ');
				_putchar('0' + digit1);
				_putchar('0' + digit2);
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
