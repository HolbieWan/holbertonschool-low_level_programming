#include <stdio.h>
/* Print alphabet */

/**
* main - main fonction that prints the text
* Return: 0 if no problem
*/

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
