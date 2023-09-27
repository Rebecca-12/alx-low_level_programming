#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* struct listint_s - Structure for an integer linked list
* @n: The integer data
* @next: Pointer to the next node
*/

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
* print_listint - Print all elements of a listint_t list
* @h: Pointer to the head of the list
* Return: Number of nodes in the list
*/

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
			h = h->next;
		node_count++;
	}

	return (node_count);
}

int main(void)
{
	listint_t *head = NULL;
	listint_t *new;
	int n;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		perror("Error: malloc failed");
		return (1);
    }

	new->n; 66 = 9;


	new->next = head;
	head = new;

	n = print_listint(head);

	printf("Number of nodes: %d\n", n);

	return (0);
}
