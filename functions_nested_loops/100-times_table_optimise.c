#include "main.h"

/**
 * print_times_table - Fonction qui affiche la table de multiplication jusqu'à n.
 * @n: Le nombre jusqu'auquel afficher la table de multiplication.
 */
void print_times_table(int n)
{
	int num1, num2, result;

    if (n < 0 || n > 15)
        return;

    for (num1 = 0; num1 <= n; num1++)
    {
        _putchar('0');

        for (num2 = 1; num2 <= n; num2++)
        {
            result = num1 * num2;

            _putchar(',');
            _putchar(' ');

			if (result < 10)
                _putchar(' ');

			if (result < 100)
				_putchar(' ');

            if (result < 10)
                _putchar('0' + result);

            else if (result < 100)
            {
                _putchar('0' + result / 10);
                _putchar('0' + result % 10);
            }
            else
            {
                _putchar('0' + result / 100);
                _putchar('0' + result / 10 % 10);
                _putchar('0' + result % 10);
            }
        }
        _putchar('\n');
    }
}
