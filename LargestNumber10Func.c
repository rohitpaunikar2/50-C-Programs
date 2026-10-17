#include <stdio.h>

// Function to find the larger number
int largest(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int num, max, i;

    printf("Enter 10 numbers: ");

    // Read the first number
    scanf("%d", &max);

    // Read remaining 9 numbers
    for (i = 2; i <= 10; i++)
    {
        scanf("%d", &num);

        max = largest(max, num);
    }

    printf("Largest number = %d", max);

    return 0;
}