#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position.
* @head: Pointer to the beginning of the list.
* @idx: Index where the new node should be added.
* @n: Value to assign to the new node.
* Return: Address of the new node, or NULL if it fails.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current = *head;

	if (idx == 0)
		return (add_nodeint(head, n));

	for (i = 0; current != NULL && i < idx - 1; i++)

	{
		current = current->next;
	}

	if (current == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);

}

