#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t count = 0;
size_t num;

slow = head;
fast = NULL;
while (slow != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
slow = slow->next;
fast = head;
num = 0;
while (num < count)
{
if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
return (count);
}
fast = fast->next;
num++;
}
if (!head)
exit(98);
}

return (count);
}
