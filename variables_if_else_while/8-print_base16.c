#include <stdio.h>
/* Print alphabet */

/**
* main - main fonction that prints the text
* Return: 0 if no problem
*/

int main(void)
{
	int i;
	char j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
