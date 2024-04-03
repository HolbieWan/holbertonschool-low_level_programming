#include "lists.h"

/**
 * sum_dlistint - function  that returns the sum of
 * all the data (n) of a dlistint_t linked list
 * @head: pointer to the head node of the list
 * Return: the sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;
	dlistint_t *current_node = head;

	if (head == NULL)
		return (0);

	while (current_node->next != NULL)
	{
		count += current_node->n;
		current_node = current_node->next;
	}
	return (count);
}
