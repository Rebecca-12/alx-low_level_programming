#include "main.h"
#include <stddef.h>

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int match;

    while (*s)
    {
        match = 0;
        while (*accept)
        {
            if (*s == *accept)
            {
                match = 1;
                break;
            }
            accept++;
        }
        if (!match)
            break;

        count++;
        s++;
        accept = accept - count + 1;
    }

    return (count);
}
