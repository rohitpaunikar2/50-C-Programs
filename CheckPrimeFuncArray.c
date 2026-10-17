#include <stdio.h>

int prime(int n)
{
    if(n < 2)
        return 0;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int a[5];

    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Prime numbers are: ");

    for(int i = 0; i < 5; i++)
    {
        if(prime(a[i]))
            printf("%d ", a[i]);
    }

    return 0;
}