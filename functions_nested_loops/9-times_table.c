#include "main.h"

/**
*times_table - fonction that prints prints the 9 times table, starting with 0
**@: no arguments
* Return: no return
*/

void times_table(void)
{
	int num1, num2, result;

	for (num1 = 0; num1 < 10 ; num1++)
	{
		_putchar('0' + 0);

		for (num2 = 1; num2 < 10 ; num2++)
		{
			result = (num1 * num2);

			_putchar(',');
			_putchar(' ');

			if (result < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + result / 10);
			}
			_putchar('0' + result % 10);
		}
		_putchar('\n');
	}
}
