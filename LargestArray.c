#include <stdio.h>

int main()
{
    int a[] = {10, 45, 23, 67, 32};
    int i, largest;

    largest = a[0];

    for (i = 1; i < 5; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    printf("Largest number = %d", largest);

    return 0;
}