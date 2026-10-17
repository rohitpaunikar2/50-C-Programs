#include <stdio.h>

int main()
{
    int a[5] = {10, 25, 15, 40, 30};
    int *p;
    int largest;

    p = a;
    largest = *p;

    for (int i = 1; i < 5; i++)
    {
        if (*(p + i) > largest)
        
        {
            largest = *(p + i);
        }
    }

    printf("Largest number = %d", largest);

    return 0;
}