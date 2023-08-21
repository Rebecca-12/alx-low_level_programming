#include "main.h"
#include <stdio.h>

int main(void)
{
    int var = 42;
    int *ptr = &var;
    printf("%p\n", (void *)ptr); // Print the address of var using printf
    return (0);
}
