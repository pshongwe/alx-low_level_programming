#include "lists.h"

/**
 * free_dlistint - Frees a listint_t list.
 * @head: Pointer to the head of the linked list to be freed.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current, *next_node;

current = head;
while (current != NULL)
{
next_node = current->next;
free(current);
current = next_node;
}
}
