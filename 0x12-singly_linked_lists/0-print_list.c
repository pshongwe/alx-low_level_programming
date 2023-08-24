#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints list of nodes
 * @h: constant list
 * Return: count of nodes
 */
size_t print_list(const list_t *h)
{
size_t count;

count = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%lu] %s\n", strlen(h->str), h->str);

count++;
h = h->next;
}
return (count);
}
