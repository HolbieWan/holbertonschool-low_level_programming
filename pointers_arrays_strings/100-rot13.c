#include "main.h"
#include "2-strlen.c"

/**
 * leet - function that encodes a string with rot13
 *@str: input of function
 * Return: str
 */

char *rot13(char *str)
{
	int i;
	int j;
	char *change_letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *encoding = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; change_letters[j] != '\0'; j++)
		{
			if (str[i] == change_letters[j])
			{
				str[i] = encoding[j];
				break;
			}
		}
	}
	return (str);
}
