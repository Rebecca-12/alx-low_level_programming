#ifndef LISTS_H
#define LISTS_H

/* Standard libraries for your project */
#include <stdio.h>
#include <stdlib.h>

/* Structure for your linked list node */
typedef struct list_s
{
    int data;                /* Data stored in the node */
    struct list_s *next;     /* Pointer to the next node */
} list_t;

/* Function prototypes */
int _putchar(char c);        /* Provided _putchar function */

/* Function prototypes for your project */
list_t *add_node(list_t **head, int data);
list_t *add_node_end(list_t **head, int data);
size_t list_len(const list_t *head);
void free_list(list_t *head);
/* Add more function prototypes here */

#endif /* LISTS_H */
