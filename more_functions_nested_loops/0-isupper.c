#include <ctype.h>
#include "main.h"

/**
*_isupper - fonction that checks for lowercase character
** @c: The character to print
* Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
