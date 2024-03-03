#include "main.h"

/**
*_abs - fonction that computes the absolute value of an integer.
** @r: The character to print
* Return: On success r.
*/

int _abs(int r)
{
	if (r < 0)
	{
		r = -1 * r;
		return (r);
	}
	else
	{
		return (r);
	}
}
