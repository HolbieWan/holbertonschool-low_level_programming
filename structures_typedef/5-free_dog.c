#include "dog.h"
#include <stdlib.h>
/**
 ** free_dog - function that frees structure dog_t
 * @d: pointer to the dog structure to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
