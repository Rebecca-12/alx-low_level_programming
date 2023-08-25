#include "main.h"

/**
* is_separator - Checks if a character is a word separator
* @c: The character to check
* Return: 1 if separator, 0 if not
*/
int is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";

    for (int i = 0; separators[i]; i++)
    {
        if (c == separators[i])
            return 1;
    }
    return 0;
}

/**
* cap_string - Capitalizes the first letter of each word in a string
* @str: The input string
* Return: A pointer to the modified string
*/
char *cap_string(char *str)
{
    char *ptr = str;
    int capitalize_next = 1;

    while (*ptr)
    {
        if (capitalize_next && (*ptr >= 'a' && *ptr <= 'z'))
        {
            *ptr = *ptr - 32; // Convert to uppercase
        }

        capitalize_next = is_separator(*ptr);
        ptr++;
    }

    return str;
}
