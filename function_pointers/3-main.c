#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: The number of arguments in argv array
 * @argv: The array of argc elements
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	char *s;

	s = argv[2];

	if (argc != 4 || argv[2][1] != 0)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(s)(num1, num2) == 0)
	{
		printf("Error\n");
		exit(98);
	}

	result = get_op_func(s)(num1, num2);
	printf("%d\n", result);
	return (0);
}
