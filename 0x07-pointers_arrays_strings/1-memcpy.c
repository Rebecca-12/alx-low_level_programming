#include "main.h"
#include <stddef.h>

/**
 *The function copies n bytes from the memory area src
 *to the memory area dest.
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        dest[i] = src[i];

    return (dest);
}
