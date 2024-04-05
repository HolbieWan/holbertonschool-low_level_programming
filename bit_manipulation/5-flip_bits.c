#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: the first number
 * @m: the second number to compare to n
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int diff_bit = n ^ m;
	unsigned long int index = (sizeof(unsigned int) * 8);

	while (index > 0)
	{
		if ((diff_bit & 1) != 0)
			count++;

		diff_bit = diff_bit >> 1;
		index--;
	}
	return (count);
}
