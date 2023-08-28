#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the
 * end of a listint_t list
 * @head: pointer to a pointer to the
 * head of the list
 * @n: value to add to the new node
 * Return: the address of the new element
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	current = head;
	while (current != NULL)
		current = current->next;

	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}
