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
	int j;
	int add = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] == '\0')
		{
			printf("0\n");
		}

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(argv[i]);
	}
	printf("%d\n", add);

	return (0);
}
