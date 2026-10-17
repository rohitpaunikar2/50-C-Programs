#include<stdio.h>

// Function to print inverted triangle
void invertedTriangle(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

}

int main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    invertedTriangle(n);

    return 0;
}