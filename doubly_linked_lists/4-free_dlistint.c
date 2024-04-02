#include "lists.h"

/**
 * free_list - function frees a dlistint_t list
 * @head: pointer to the head node of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{

	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
