#include "lists.h"
#include <stdlib.h>

/**
* free_list - Frees a list_t list.
* @head: Pointer to the head of the list.
*/

void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;  /* Save the next node */
		free(current->str);    /* Free the string in the node*/
		free(current);         /* Free the node itself*/
		current = next;        /* Move to the next node*/
	}
}

