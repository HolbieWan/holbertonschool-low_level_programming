#include "main.h"

/**
*jack_bauer - fonction that prints every minute of the day of Jack Bauer,
*starting from 00:00 to 23:59.
** @: The character to print
* Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24 ; hour++)
	{
		int hour1 = hour / 10;
		int hour2 = hour % 10;

		for (minute = 0; minute < 60 ; minute++)
		{
			int minute1 = minute / 10;
			int minute2 = minute % 10;

			_putchar('0' + hour1);
			_putchar('0' + hour2);
			_putchar(':');
			_putchar('0' + minute1);
			_putchar('0' + minute2);
			_putchar('\n');
		}
	}
}
