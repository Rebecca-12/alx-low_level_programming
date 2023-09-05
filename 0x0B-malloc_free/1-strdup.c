#include "main.h"
#include <stdlib.h>

/**
* _strdup - Duplicate a string in newly allocated memory.
* @str: The string to duplicate.
*
* Return: If str is NULL or if memory allocation fails, returns NULL.
* Otherwise, returns a pointer to the newly allocated string.
*/
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i;

	if (str == NULL)
	return (NULL);

	/* Calculate the length of the input string */
	while (str[length])
	length++;

	/* Allocate memory for the duplicate string */
	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	return (NULL);

	/* Copy the input string into the duplicate */
	for (i = 0; i <= length; i++)
	duplicate[i] = str[i];

	return (duplicate);
}
