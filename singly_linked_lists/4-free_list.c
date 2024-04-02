#include "lists.h"

int _strlen(const char *s);

/**
 * free_list - function that adds a new node at the end of a list_t list
 * @head: pointer to the head node of the list
 * Return: void
 */
void free_list(list_t *head)
{

	list_t *next;


	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
