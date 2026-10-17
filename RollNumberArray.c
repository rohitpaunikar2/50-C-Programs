#include <stdio.h>

int main()
{
    int marks[5] = {45, 28, 67, 32, 81};
    int i;

    for (i = 0; i < 5; i++)
    {
        if (marks[i] < 35)
        {
            printf("Roll No: %d\n", i + 1);
        }
    }

    return 0;
}