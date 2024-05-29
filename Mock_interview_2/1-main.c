#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void _print_rev(char *s)
{
	int i;
	int lenghts = 0;

	i = strlen(s);

	for (i; i > 0; i--)
	{
		putchar(s[i]);
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
    _print_rev_recursion("\nColton Walker");
    return (0);
}

/*void _print_rev_recursion(char *s)
{
    if (*s == '\0')
        return;

    _print_rev_recursion(s + 1);
    putchar(*s);
}*/
