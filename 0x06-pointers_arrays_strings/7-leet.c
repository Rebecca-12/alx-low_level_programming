#include "main.h"

char *leet(char *str)
{
    char *leet_chars = "aAeEoOtTlL";
    char *leet_replace = "4433007711";

    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; leet_chars[j] != '\0'; j++)
        {
            if (str[i] == leet_chars[j])
                str[i] = leet_replace[j];
        }
    }

    return str;
}
