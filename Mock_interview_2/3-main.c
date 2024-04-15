#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void _puts(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		putchar(str[i]);
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
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
