#include <stdio.h>
#include <string.h>

char *_strcpy(char *dest, char *src)
{
	int i;

	for(i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];
	}
	printf("%s\n", dest);
}

int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
