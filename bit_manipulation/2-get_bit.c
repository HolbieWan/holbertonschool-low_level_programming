#include "main.h"

/**
 * get_bit - function that prints the binary representation of a number.
 * @n: the number to return the bit value of at index
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned int) * 8))
		return (-1);

	mask = 1UL << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
