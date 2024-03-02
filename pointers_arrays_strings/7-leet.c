#include "main.h"
#include "2-strlen.c"

/**
 * leet - function that encodes a string into 1337
 *@str: input of function
 * Return: char *
 */

char *leet(char *str)
{
	int i;
	int j;
	char *change_letters = "aAeEoOtTlL";
	char *encoding = "4433007711";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[j] == change_letters[i])
			{
				str[j] = encoding[i];
			}
		}
	}
	return (str);
}
