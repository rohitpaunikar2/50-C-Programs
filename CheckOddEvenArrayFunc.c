#include <stdio.h>

int even(int n)
{
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int a[5];

    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Even numbers: ");

    for(int i = 0; i < 5; i++)
    {
        if(even(a[i]))
            printf("%d ", a[i]);
    }

    printf("\nOdd numbers: ");

    for(int i = 0; i < 5; i++)
    {
        if(!even(a[i]))
            printf("%d ", a[i]);
    }

    return 0;
}