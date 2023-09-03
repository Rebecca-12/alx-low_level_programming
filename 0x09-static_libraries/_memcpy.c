#include "main.h"
#include <stddef.h>

/**
* _memcpy - Copy memory area
* @dest: Pointer to the destination memory area
* @src: Pointer to the source memory area
* @n: Number of bytes to copy
*
* Description: This function copies @n bytes from the memory area pointed to by @src
* to the memory area pointed to by @dest. The memory areas may overlap, but the copy
* is always done in a non-destructive manner.
*
* Return: A pointer to the destination memory area @dest.
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        dest[i] = src[i];

    return (dest);
}
