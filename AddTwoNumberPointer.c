#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *p, *q;

    p = &a;
    q = &b;

    int sum = *p + *q;

    printf("First number = %d\n", *p);
    printf("Second number = %d\n", *q);
    printf("Sum = %d\n", sum);

    return 0;
}