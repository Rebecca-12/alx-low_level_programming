#include "main.h"

/**
 * reset_to_98 - Updates the value pointed to by a pointer to 98.
 * @n: A pointer to the integer to be updated. lol
Return: 0
 */
void reset_to_98(int *n)
{
    *n = 98;
}



#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer
 *Return:0
 */
void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
