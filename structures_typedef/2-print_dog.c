#include "dog.h"
#include <stdio.h>

/**
 ** print_dog - function that initialize a variable of type struct dog
 * @d: the structure dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *string = "(nil)";

	if (d == 0)
		return;

	if (d->name == NULL)
		d->name = string;

	if (d->owner == NULL)
		d->owner = string;

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
