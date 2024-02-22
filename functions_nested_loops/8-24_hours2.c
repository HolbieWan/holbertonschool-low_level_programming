#include "main.h"

/**
*jack_bauer - fonction that prints every minute of the day of Jack Bauer,
starting from 00:00 to 23:59.
** @: The character to print
* Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

void jack_bauer(void)
{
	int hour;

	for (hour = 0; hour < 24 ; hour++)
	{
		int minute;

		for (minute = 0; minute < 60 ; minute++)
		{
			_putchar(hour / 10);
			_putchar(hour % 10);
			_putchar(':');
			_putchar(minute / 10);
			_putchar(minute % 10);
		}
	}
}
