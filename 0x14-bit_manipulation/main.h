#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: Pointer to a string of 0 and 1 chars
*
* Return: The converted number, or 0 if there is an invalid character or b is NULL.
*/

/* Function prototypes */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int _putchar(char c);

#endif /* MAIN_H */
