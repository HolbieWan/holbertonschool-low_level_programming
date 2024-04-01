#include <stdio.h>


int print_number(long int n)
{

	int char_count = 0;

	if (n < 0)
	{
		putchar('-');
		n = -n;
		char_count = 1;
	}

	if (n == 0)
	{
		putchar('0');
		char_count = 1;
		return (char_count);
	}
	if (n / 10)
	{
		char_count += print_number(n / 10);
	}
	putchar(n % 10 + '0');
		char_count++;


	return (char_count);
}


int main(void)
{
	int char_count = 0;

    char_count = print_number(12345);
	printf("\n");
	printf("%d\n", char_count);

    return (0);
}
