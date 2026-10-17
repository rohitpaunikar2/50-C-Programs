#include <stdio.h>

// Function to calculate total marks
int totalMarks(int m1, int m2, int m3, int m4, int m5)
{
    return m1 + m2 + m3 + m4 + m5;
}

// Function to calculate percentage
float percentage(int total)
{
    return total / 5.0;
}

// Function to display result
void displayResult(float percent)
{
    if (percent >= 40)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");
}

int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float percent;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = totalMarks(m1, m2, m3, m4, m5);
    percent = percentage(total);

    printf("\nTotal Marks = %d / 500\n", total);
    printf("Percentage = %.2f%%\n", percent);

    displayResult(percent);

    return 0;
}