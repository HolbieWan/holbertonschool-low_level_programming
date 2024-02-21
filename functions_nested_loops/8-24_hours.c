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
	int i;

	for (i = 0; i < 10 ; i++)
	{
		int j;

		for (j = 0; j < 10 ; j++)
		{
			printf("0%d:0%d\n", i, j);
		}
		for (j = 10; j < 60 ; j++)
		{
			printf("0%d:%d\n", i, j);
		}
	}
	for (i = 10; i < 24 ; i++)
	{
		int j;

		for (j = 0; j < 10 ; j++)
		{
			printf("%d:0%d\n", i, j);
		}
		for (j = 10; j < 60 ; j++)
		{
			printf("%d:%d\n", i, j);
		}
	}
}
