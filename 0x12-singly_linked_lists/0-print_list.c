#include "lists.h"
#include <stdio.h>

/**
* print_list - Prints all the elements of a list_t list.
* @h: Pointer to the head of the list.
* Return: The number of nodes in the list.
*/

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		/* If str is NULL, print [0] (nil) */
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		/* Move to the next node */
		h = h->next;
		node_count++;
	}

	return (node_count);
}
