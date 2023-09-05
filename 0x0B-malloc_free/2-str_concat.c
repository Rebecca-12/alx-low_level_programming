#include "main.h"
#include <stdlib.h>

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: If s1 or s2 is NULL, returns a pointer to an empty string ("").
* Otherwise, returns a pointer to a newly allocated string containing
* the concatenation of s1 and s2.
*/

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len1 = 0, len2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < len2; i++, j++)
		concatenated[i] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}
