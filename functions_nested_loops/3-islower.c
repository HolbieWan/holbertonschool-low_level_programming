#include <ctype.h>
#include "main.h"

/**
*_islower - fonction that checks for lowercase character
* Return: void
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
