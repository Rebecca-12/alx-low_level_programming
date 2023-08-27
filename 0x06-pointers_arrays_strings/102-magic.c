#include <stdio.h>

int main(void)
{
    int a[5] = {98, 198, 298, 398, 498};
    int *p;

    p = a + 2;
    printf("Value before: a[2] = %d\n", a[2]);

    /* Add the line of code here */
    *(p + 5) = 98;

    printf("Value after: a[2] = %d\n", a[2]);

    return (0);
}
