#include <stdio.h>
/**
* main - main fonction that prints the text
* Return: 0 if no problem
*/
int main(void)
{
	char my_char = ' ';
	int my_int = 0;
	long int my_long = 0;
	long long int my_long_long = 0;
	float my_float = 0;

	printf("Size of a char: %ld byte(s)", sizeof(my_char));
	printf("Size of an int: %ld byte(s)", sizeof(my_int));
	printf("Size of a long int: %ld byte(s)", sizeof(my_long));
	printf("Size of a long long int: %ld byte(s)", sizeof(my_long_long));
	printf("Size of a float: %ld byte(s)", sizeof(my_float));

	return (0);
}
