#include <stdio.h>
#include <stdlib.h>

void _print_numbers(int n)
{
	printf("%d", n);
}

int main()
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_print_numbers(i);
	}
	printf("\n");
}
