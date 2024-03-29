#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - Allocates memory for an array using malloc.
* @nmemb: The number of elements in the array.
* @size: The size (in bytes) of each element.
*
* Return: A pointer to the allocated memory.
* If nmemb or size is 0 or if malloc fails, return NULL.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
