#include <stdio.h>
/* Print alphabet */

/**
* main - main fonction that prints the text
* Return: 0 if no problem
*/

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57 )
		{
			break;
		}
		putchar(44);
		putchar(32);
	}
	putchar('\n');

	return (0);
}
