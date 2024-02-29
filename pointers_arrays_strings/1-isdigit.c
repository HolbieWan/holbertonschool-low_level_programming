#include <ctype.h>
#include "main.h"

/**
*_isdigit - fonction that checks for lowercase character
** @c: The character to print
* Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
