#include "main.h"
#include <stdlib.h>

/**
* argstostr - Concatenates all the arguments of a program into a single string.
* @ac: The number of arguments.
* @av: An array of strings containing the arguments.
*
* Return: If ac is 0 or av is NULL, returns NULL.
* Otherwise, returns a pointer to the newly allocated string.
*/

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++; /* For the newline character */
	}

	/* Allocate memory for the concatenated string */
	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	/* Copy each argument and append newline character */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n'; /* Append newline character */
		k++;
	}

	str[k] = '\0'; /* Null-terminate the string */
	return (str);
}
