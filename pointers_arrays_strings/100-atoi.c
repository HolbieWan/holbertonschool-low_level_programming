#include "main.h"
#include "1-isdigit.c"

/**
 * _atoi - prints the first string of integer encountered
 *@s: input array
 * Return: an integer
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int integer_value = 0;
	int sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		if (isdigit(s[i]))
		{
			integer_value = (integer_value * 10) + (s[i] - '0');
		}
		else if(integer_value != 0)
		{
			break;
		}
		i++;
	}
	return (integer_value * sign);
}
