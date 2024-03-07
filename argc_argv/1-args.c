#include <stdio.h>

/**
 * main - main function of the programme,
 *prints the number of arguments of function main
 * @argc: unused argument
 * @argv: The array of strings
 * Return: void
 */


int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
