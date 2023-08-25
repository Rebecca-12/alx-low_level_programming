#include "main.h"

/**
* string_toupper - Converts all lowercase letters in a string to uppercase
* @str: The input string
* Return: A pointer to the modified string
*/

char *string_toupper(char *str)
{
    char *ptr = str;

    while (*ptr)
    {
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr = *ptr - 32; // Convert to uppercase
        }
        ptr++;
    }

    return str;
}
