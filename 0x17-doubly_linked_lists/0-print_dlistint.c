#include "lists.h"

/**
 * print_dlistint - prints number of nodes
 * @h: head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;
	const dlistint_t *current;

	count = 0;
	current  = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
