#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function of the programme,
 * multyplies and prints the arguments of function main
 * @argc: number of arguments
 * @argv: The array of strings
 * Return: void
 */

int main(int argc, char **argv)
{
	int a, b, c;

	if (argc >= 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;

		printf("%d\n", c);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
