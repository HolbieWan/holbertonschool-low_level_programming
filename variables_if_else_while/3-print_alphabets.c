#include <stdio.h>
/* Print alphabet */

/**
* main - main fonction that prints the text
* Return: 0 if no problem
*/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
