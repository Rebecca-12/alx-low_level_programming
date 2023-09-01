include "main.h"

/**
* wildcmp - Compares two strings with wildcard support.
* @s1: The first string.
* @s2: The second string with wildcards (*).
* Return: 1 if strings are identical, 0 otherwise.
*/


int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
        if (*(s2 + 1) == '*')
	return (wildcmp(s1, s2 + 1)); /* Skip consecutive asterisks */

	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)); /* Try with and without using the asterisk */
	}

	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	return (wildcmp(s1 + 1, s2 + 1)); /* Characters match, continue checking */

	if (*s1 == '\0' && *s2 == '\0')
	return 1; /* Both strings are at the end, they match */

	return 0; /* Strings don't match */
}
