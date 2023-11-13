#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the linked list.
 * @idx: Index where the new node should be inserted. Starts at 0.
 * @n: Value to store in the new node.
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current, *new_node;
unsigned int i;

if (h == NULL)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;

if (idx == 0)
{
new_node = add_dnodeint(h, n);
return (new_node);
}

current = *h;
i = 0;

while (current != NULL)
{
if (i == idx - 1)
{
if (current->next == NULL)
{
new_node->prev = current;
current->next = new_node;
return (new_node);
}
new_node->next = current->next;
new_node->prev = current;

if (current->next != NULL)
current->next->prev = new_node;

current->next = new_node;
return (new_node);
}

current = current->next;
i++;
}
free(new_node);
return (NULL);
}
