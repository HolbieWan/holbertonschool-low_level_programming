#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * _strcat - concatenates src to dest
 *@src: inpout string to concatenate
 *@dest: string to add to dest
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int lenght_text_dest;
	int lenght_text_src;
	int i = 0;

	/*while (dest[i] != '\0')
	{
		i++;
	}*/
	lenght_text_dest = _strlen(dest);
	lenght_text_src = _strlen(src);

	for (i =  0; i <= lenght_text_src; i++)
	{
		dest[lenght_text_dest + i] = src[i];
	}
	return (dest);
}
