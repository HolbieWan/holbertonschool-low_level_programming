#include "main.h"
#include "dog.h"

/**
 ** init_dog - function that initialize a variable of type struct dog
 * @d: the structure dog
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
