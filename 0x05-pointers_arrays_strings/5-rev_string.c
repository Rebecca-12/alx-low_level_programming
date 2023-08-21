#include "main.h"

int main(void)
{
    int arr[5];
    int *ptr = arr;

    *(ptr + 2) = 42;  // Set value at index 2 to 42

    _putchar('0' + (*(ptr + 2) / 10));   // Digit '4'
    _putchar('0' + (*(ptr + 2) % 10));   // Digit '2'
    _putchar('\n');

    return (0);
}
