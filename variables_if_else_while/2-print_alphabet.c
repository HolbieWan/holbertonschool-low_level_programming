#include <stdio.h>
/* Print alphabet */

/**
* main - main fonction that prints the text
* Return: 0 if no problem
*/

int main(void)
{
	char alphabet[] = "abcdefghigklmnopqrstuvwxyz\n";

	for (int i = 0; alphabet[i] != '\0'; i++)
	{
		putchar(alphabet[i]);
	}

	return (0);
}
