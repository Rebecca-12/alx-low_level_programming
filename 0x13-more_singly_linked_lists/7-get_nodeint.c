#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list.
* @head: Pointer to the beginning of the list.
* @index: Index of the node to retrieve.
* Return: Pointer to the nth node or NULL if it doesn't exist.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
       	listint_t *current = head;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	return (current);
}
