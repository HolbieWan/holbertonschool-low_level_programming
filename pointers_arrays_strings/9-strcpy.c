#include "main.h"

/**
 **_strcpy - copys the a string into a buffer
 *@src: values to copy
 *@dest: destination of the src values
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int lenght_src = 0;
	int i;

	while (src[lenght_src] != '\0')
	{
		lenght_src++;
	}

	for (i = 0; i <= lenght_src ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
