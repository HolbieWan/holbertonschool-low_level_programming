#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function of the programme,
 * program that adds positive numbers of the arguments
 * @argc: number of arguments
 * @argv: The array of strings
 * Return: 0 if no problem
 */

int main(int argc, char **argv)
{
	int i;
	int add = 0;

	for (i = 1; i < argc ; i++)
	{
		if (*argv[i] == '\0')
		{
			printf("0\n");
		}

		else if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		else
		{
			add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);

	return (0);
}
