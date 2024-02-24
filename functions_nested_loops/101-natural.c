#include <stdio.h>

int main(void)
{
	int n = 1024;
	int a = 3;
	int b = 5;
	int i;
	/** n / 3 = 341,
	*   n / 5 = 204 */
	int add3 = 0;
	int add5 = 0;
	int total = 0;

	for (i = 0; i <= (n / a) ; i++)
	{
		add3 += a * i;
	}
	for (i = 0; i <= (n / b) - 1 ; i++)
	{
		add5 += b * i;
	}
	total = add3 + add5;
	printf ("%d\n", total);

	return (0);
}

