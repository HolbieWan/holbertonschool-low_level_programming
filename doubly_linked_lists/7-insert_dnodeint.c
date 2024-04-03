#include "lists.h"

/**
 * insert_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @h: double pointer to the head node of the list
 * @idx: index of the node where to add the new node
 * @n: The integer value (data)
 * Return:  the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temp = *h, *new_node;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (*h == NULL)
	{
		return (add_dnodeint(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	while (count < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (NULL);
	new_node->prev = temp;
	new_node->next = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = new_node;
		temp->next = new_node;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (new_node);
}
