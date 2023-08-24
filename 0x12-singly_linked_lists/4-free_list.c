#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the linked list to be freed.
 */
void free_list(list_t *head)
{
    list_t *current, *next_node;

    current = head;

    while (current != NULL)
    {
        next_node = current->next; // Store the next node before freeing the current one
        free(current->str); // Free the duplicated string
        free(current); // Free the node itself
        current = next_node; // Move to the next node
    }
}

