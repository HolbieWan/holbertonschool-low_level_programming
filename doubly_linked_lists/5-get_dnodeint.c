#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head: pointer to the head node of the list
 * @index: index of the node where to add the new node
 * Return:  the nth node of a dlistint_t linked list
 * or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int count = 0;
	dlistint_t *current_node = head;

	if (head == NULL)
		return (NULL);

	while (current_node->next != NULL)
	{
		if (count == (int) index)
			return (current_node);

		current_node = current_node->next;
		count++;
	}
	return (NULL);
}
