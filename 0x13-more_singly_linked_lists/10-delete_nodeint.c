#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - Deletes a node at a given position.
* @head: Pointer to the beginning of the list.
* @index: Index of the node to delete.
* Return: 1 if successful, -1 if it fails.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *temp, *current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index - 1; i++)
	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
		return (-1);
	temp = current->next->next;
	free(current->next);
	current->next = temp;

	return (1);
}
