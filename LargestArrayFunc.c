#include <stdio.h>

int largest(int a[], int n)
{
    int max = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    return max;
}

int main()
{
    int a[5];

    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Largest number = %d", largest(a, 5));

    return 0;
}