#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
    char *h = haystack;
    char *n = needle;

    while (*h)
    {
        while (*n && *h == *n)
        {
            h++;
            n++;
        }
        if (!*n)
            return (haystack);

        h = haystack++;
        n = needle;
    }

    return (NULL);
}
