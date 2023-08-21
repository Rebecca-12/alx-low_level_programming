#include "main.h"

int main(void)
{
    int n = 402;
    _putchar('n');
    _putchar('=');
    _putchar('0' + (n / 100));   // Digit '4'
    _putchar('0' + ((n / 10) % 10)); // Digit '0'
    _putchar('0' + (n % 10));    // Digit '2'
    _putchar('\n');
    reset_to_98(&n);
    _putchar('n');
    _putchar('=');
    _putchar('0' + (n / 100));   // Digit '9'
    _putchar('0' + ((n / 10) % 10)); // Digit '8'
    _putchar('\n');
    return (0);
}

