#include "main.h"

/**
*times_table - fonction that prints every minute of the day of Jack Bauer,
** @: The character to print
* Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
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
			_putchar('0' + result / 10);
			_putchar();
		}
		_putchar('\n');
	}
}
