#include "main.h"
#include <stdbool.h>


/**
* is_separator - Checks if a character is a word separator
* @c: The character to check
* Return: 1 if separator, 0 if not
*/


char *cap_string(char *str)
{
    bool new_word = true;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
        {
            new_word = true;
        }
        else if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - 32; // Convert to uppercase
            new_word = false;
        }
        else
        {
            new_word = false;
        }
    }

    return str;
}

