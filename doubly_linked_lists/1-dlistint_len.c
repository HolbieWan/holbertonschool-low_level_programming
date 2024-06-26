#include "lists.h"

/**
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list.
 * @h: pointer to the head node of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
