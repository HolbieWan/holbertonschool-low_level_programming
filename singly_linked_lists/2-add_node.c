#include "lists.h"

int _strlen(const char *s);

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to the head node of the list
 * @str: first string element of the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * _strlen - function that returns the lenght of a string
 *@s: the string to return the lengh of
 * Return: lenght
 */

int _strlen(const char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

