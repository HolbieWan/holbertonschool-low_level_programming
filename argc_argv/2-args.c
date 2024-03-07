#include <stdio.h>

/**
 * main - main function of the programme,
 *prints the arguments of function main
 * @argc: number of arguments
 * @argv: The array of strings
 * Return: void
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
