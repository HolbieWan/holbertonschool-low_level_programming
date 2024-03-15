#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

char *_strcpy(char *dest, char *src);

/**
 ** new_dog - function that creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: a pointer to the new dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *new_dog_name;
	char *new_dog_owner;
	unsigned int sizeof_name = 0;
	unsigned int sizeof_owner = 0;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}
	while (name[sizeof_name] != '\0')
		sizeof_name++;

	new_dog_name = malloc(sizeof_name + 1);
	if (new_dog_name == NULL)
	{
		free(new_dog_name);
		return (NULL);
	}
	_strcpy(new_dog_name, name);

	while (owner[sizeof_owner] != '\0')
		sizeof_owner++;

	new_dog_owner = malloc(sizeof_owner + 1);
	if (new_dog_owner == NULL)
	{
		free(new_dog_owner);
		return (NULL);
	}
	_strcpy(new_dog_owner, owner);

	new_dog_ptr->name = new_dog_name;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = new_dog_owner;

	return (new_dog_ptr);
}

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
		lenght_src++;

	for (i = 0; i <= lenght_src ; i++)
		dest[i] = src[i];

	return (dest);
}
