#include <stdio.h>

int main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("Before change: %d\n", a);

    *p = 20;   // Change value of a using pointer
    // a = 20;

    printf("After change: %d\n", a);

    return 0;
}