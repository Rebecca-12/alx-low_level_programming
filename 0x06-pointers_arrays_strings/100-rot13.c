#include "main.h"

/**
 * rot13 - Encodes a string using the ROT13 cipher
 * @str: The input string
 * Return: A pointer to the modified string
 */
char *rot13(char *str)
{
    char *ptr = str;
    char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char rot13_alphabet[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    while (*ptr)
    {
        char is_alpha = 0;
        for (int i = 0; alphabet[i]; i++)
        {
            if (*ptr == alphabet[i])
            {
                *ptr = rot13_alphabet[i];
                is_alpha = 1;
                break;
            }
        }
        if (is_alpha)
            ptr++;
        else
            ptr++;
    }

    return str;
}
