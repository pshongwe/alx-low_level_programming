#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - counts number of nodes
 * @h: head node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count;
	const listint_t *current;

	count = 0;
	current  = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
