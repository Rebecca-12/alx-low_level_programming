#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
* struct listint_s - singly linked list
* @n: Integer data in the node
* @next: Pointer to the next node
*
* Description: A structure to represent a node in a singly linked list
*/

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* Function prototypes */

/* Task 0 */
size_t print_listint(const listint_t *h);

/* Task 1 */
size_t listint_len(const listint_t *h);

/* Task 2 */
listint_t *add_nodeint(listint_t **head, const int n);

/* Task 3 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* Task 4 */
void free_listint(listint_t *head);

/* Task 5 */
void free_listint2(listint_t **head);

/* Task 6 */
int pop_listint(listint_t **head);

/* Task 7 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* Task 8 */
int sum_listint(listint_t *head);

/* Task 9 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* Task 10 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/* Task 11 */
listint_t *reverse_listint(listint_t **head);

/* Task 12 */
size_t print_listint_safe(const listint_t *head);

/* Task 13 */
size_t free_listint_safe(listint_t **h);

/* Task 14 */
listint_t *find_listint_loop(listint_t *head);

#endif /* LISTS_H */
