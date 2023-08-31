#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to a pointer to the head of the linked list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current, *temp;
int difference;

difference = 0;
if (h == NULL || *h == NULL)
return (0);
current = *h;
while (current != NULL)
{
difference = current - current->next;
if (difference > 0)
{
temp = current->next;
free(current);
current = temp;
count++;
}
else
{
free(current);
*h = NULL;
count++;
break;
}
}
*h = NULL;
return (count);
}
