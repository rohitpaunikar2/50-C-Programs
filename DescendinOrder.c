#include <stdio.h>

int main()
{
    // Array containing 10 numbers
    int a[10] = {45, 12, 78, 23, 9, 56, 34, 89, 21, 67};

    int i, j, temp;

    // Outer loop: performs multiple passes
    for (i = 0; i < 10; i++)
    {
        // Inner loop: compares adjacent elements
        // 9 - i reduces comparisons after each pass
        for (j = 0; j < 9 - i; j++)
        {
            // If the current element is greater
            // than the next element, swap them
            if (a[j] < a[j + 1])
            {
                temp = a[j];       
                a[j] = a[j + 1];   
                a[j + 1] = temp;   
            }
        }
    }

    // Print the sorted array
    printf("Ascending order:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}