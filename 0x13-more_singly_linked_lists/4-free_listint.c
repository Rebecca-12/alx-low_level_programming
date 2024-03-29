#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint - Frees a listint_t list.
* @head: Pointer to the beginning of the list.
*/

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
