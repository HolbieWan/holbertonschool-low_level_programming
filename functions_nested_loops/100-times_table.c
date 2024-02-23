#include "main.h"

/**
*print_times_table - fonction that prints the n times table, starting with 0.
** @n: The character to print
* Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

void print_times_table(int n)
{
	int num1, num2, result, digit10_1, digit10_2, digit100_1, digit100_2, digit100_3;

	if (n < 0 || n > 15)
	{

	}
	else
	{
		for (num1 = 0; num1 < n + 1 ; num1++)
		{
			_putchar('0' + 0);

			for (num2 = 1; num2 < n + 1 ; num2++)
			{
				result = (num1 * num2);
				/**If 2 digits result*/
				digit10_1 = result / 10;
				digit10_2 = result % 10;
				/**If 3 digits result*/
				digit100_1 = result / 100;
				digit100_2 = result / 10 % 10;
				digit100_3 = result % 10;

				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
				}
				if (result >= 10 && result < 100)
				{
					_putchar(' ');
					_putchar('0' + digit10_1);
					_putchar('0' + digit10_2);
				}
				if (result >= 100)
				{
					_putchar('0' + digit100_1);
					_putchar('0' + digit100_2);
					_putchar('0' + digit100_3);
				}
			}
			_putchar('\n');
		}
	}
}
