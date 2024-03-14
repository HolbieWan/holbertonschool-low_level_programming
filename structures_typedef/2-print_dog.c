#include "dog.h"
#include <stdio.h>

/**
 ** print_dog - function that initialize a variable of type struct dog
 * @d: the structure dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;

	if (d->name == 0)
		printf("Name: Nil\nAge: %f\nOwner: %s\n", d->age, d->owner);
	if (d->age == 0)
		printf("Name: %s\nAge: Nil\nOwner: %s\n", d->name, d->owner);
	if (d->owner == 0)
		printf("Name: %s\nAge: %f\nOwner: Nil\n", d->name, d->age);

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
