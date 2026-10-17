#include <stdio.h>

int main()
{
    int a[5], i, sum = 0;
    float average;

    printf("Enter 5 array elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    average = (float)sum / 5;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}