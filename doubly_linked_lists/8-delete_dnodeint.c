#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes
 * the node at index index of a dlistint_t linked list
 * @head: pointer to the head node of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = *head;

	while (count < index && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	if (temp->next != NULL)
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}
	else
	{
		temp->prev->next = NULL;
	}
	return (1);
}
