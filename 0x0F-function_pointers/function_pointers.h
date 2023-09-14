#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Prototype for _putchar */
int _putchar(char c);

/* Prototype for Task 0: print_name */
void print_name(char *name, void (*f)(char *));

/* Prototype for Task 1: array_iterator */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Prototype for Task 2: int_index */
int int_index(int *array, int size, int (*cmp)(int));

/* Prototype for Task 3: calc */
int (*get_op_func(char *s))(int, int);

#endif /* FUNCTION_POINTERS_H */
