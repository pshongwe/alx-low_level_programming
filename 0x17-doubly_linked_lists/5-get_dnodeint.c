#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node
 * of a dlistint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to be returned (starting at 0).
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current;

	count = 0;
	current = head;
	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
