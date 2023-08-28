#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints number of nodes
 * @h: head node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *current;

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
