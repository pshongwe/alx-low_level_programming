#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to the head of the linked list to be freed.
 */
void free_listint2(listint_t **head)
{
listint_t *current, *next_node;


if (head == NULL)
	return;
current = *head;

while (current != NULL)
{
next_node = current->next;
free(current);
current = next_node;
}
*head = NULL;
}

