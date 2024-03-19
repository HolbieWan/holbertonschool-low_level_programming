#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int result;
	char *s;
	s = argv[2];


	if (argc != 4)
	{
		printf("Error");
		exit (98);
	}


	result = get_op_func(s)(num1, num2);
	printf("Resultat: %d\n", result);
	return (0);
}
