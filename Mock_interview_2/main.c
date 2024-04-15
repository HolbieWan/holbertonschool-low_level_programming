#include <stdio.h>
#include <stdlib.h>

void print_square(int size)
{
	int i;
	int j;
	char p = '#';

	if (size == 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar(p);
		}
		putchar('\n');
	}
	putchar('\n');
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}
