#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
	int j;
	int k;
	int counter = 0;

	{
		for (i = 0; i <= 9; i++)
			for (j = 0; j <= 9; j++)
				for (k = 0; k <= 9; k++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					counter += 1;

					if (counter == 1000)
					{
						putchar('\n');
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
	}
    return(0);
}
