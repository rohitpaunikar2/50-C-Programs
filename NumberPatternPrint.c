#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter the value m: ");
    scanf("%d", &m);

    printf("Enter the value n: ");
    scanf("%d", &n);

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}