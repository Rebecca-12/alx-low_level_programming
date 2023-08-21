#include "main.h"

int main(void)
{
    int n = 98;
    int *p = &n;

    *p = 402;

    _putchar('0' + (n / 100));   // Digit '4'
    _putchar('0' + ((n / 10) % 10)); // Digit '0'
    _putchar('0' + (n % 10));    // Digit '2'
    _putchar('\n');

    return (0);
}
