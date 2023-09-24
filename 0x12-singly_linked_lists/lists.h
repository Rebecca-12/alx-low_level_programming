#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function Prototypes */

/* Task 0 - Print list */
size_t print_list(const list_t *h);

/* Task 1 - List length */
size_t list_len(const list_t *h);

/* Task 2 - Add node at the beginning */
list_t *add_node(list_t **head, const char *str);

/* Task 3 - Add node at the end */
list_t *add_node_end(list_t **head, const char *str);

/* Task 4 - Free list */
void free_list(list_t *head);

/* Additional Functions (if any) */

/* Prototype for _putchar function */
int _putchar(char c);

#endif /* LISTS_H */
