#include "lists.h"

/**
 * dlistint_len - counts number of nodes
 * @h: head node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;
	const dlistint_t *current;

	count = 0;
	current  = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
