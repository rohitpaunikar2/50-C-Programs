#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p;
    int sum = 0;

    p = a;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + *(p + i);
    }

    printf("Sum of array elements = %d", sum);

    return 0;
}