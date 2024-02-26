#include <ctype.h>
#include "main.h"

/**
*mul - fonction that checks for lowercase character
** @a: input variable
** @b: input variable
* Return: On success c.
*On error, O is returned, and errno is set appropriately.
*/

int mul(int a, int b)
{
	int c;

	c = a * b;
	return (c);
}
