#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates an array of characters and initializes it with a char.
* @size: The size of the array to create.
* @c: The character to initialize the array with.
*
* Return: If size is 0 or if memory allocation fails, returns NULL.
* Otherwise, returns a pointer to the array.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
