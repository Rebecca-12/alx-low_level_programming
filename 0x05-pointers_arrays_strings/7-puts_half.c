#include "main.h"

int main(void)
{
    int n = 98;
    int *p = &n;

    _putchar('0' + (n / 10));   // Digit '9'
    _putchar('0' + (n % 10));   // Digit '8'
    _putchar('\n');

    return (0);
}
