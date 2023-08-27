#include "main.h"

/**
 * leet - Encodes a string into 1337 speak
 * @str: The input string
 * Return: A pointer to the modified string
 */
char *leet(char *str)
{
    char *ptr = str;
    char leet_replace[] = "aAeEoOtTlL";
    char leet_encoded[] = "4433007711";

    while (*ptr)
    {
        for (int i = 0; leet_replace[i]; i++)
        {
            if (*ptr == leet_replace[i])
            {
                *ptr = leet_encoded[i];
                break;
            }
        }
        ptr++;
    }

    return str;
}
