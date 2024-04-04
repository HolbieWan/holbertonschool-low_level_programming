#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: is a char pointing to a string of 0 and 1 chars
 * Return: the binary number converted in integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int integer = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		integer = (integer << 1) + (b[i] - '0');
		i++;
    }
	return (integer);
}
