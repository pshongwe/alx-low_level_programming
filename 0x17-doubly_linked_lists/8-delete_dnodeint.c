#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index of the node to be deleted. Starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	current = *head;
	i = 0;
	while (current != NULL)
	{
		if (i + 1 == index)
		{
			temp = current->next;
			if (temp == NULL)
				return (-1);
			current->next = temp->next;
			if (temp->next != NULL)
				temp->next-prev = current;
			free(temp);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
