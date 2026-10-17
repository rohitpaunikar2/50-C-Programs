#include <stdio.h>

int main()
{
    int arr[2][2][3] = {
        {{10, 20, 30}, {40, 50, 60}},
        {{70, 80, 90}, {100, 110, 120}}};

    int (*ptr)[2][3] = arr;

    printf("%d %d %d\n", **(*ptr), *(*(*ptr) + 1), *(*(*ptr) + 2));
    printf("%d %d %d\n", **((*ptr) + 1), *(*((*ptr) + 1) + 1), *(*((*ptr) + 1) + 2));

    ++ptr; // Move to the 2nd 2D array

    printf("%d %d %d\n", **(*ptr), *(*(*ptr) + 1), *(*(*ptr) + 2));
    printf("%d %d %d\n", **((*ptr) + 1), *(*((*ptr) + 1) + 1), *(*((*ptr) + 1) + 2));

    return 0;
}