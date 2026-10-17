#include <stdio.h>

int main() {
    // Declare variables: four marks and total (float), grade (char)
    float mark1, mark2, mark3, mark4, total;
    char grade;

    // Input four marks (each out of 25, total out of 100)
    printf("Enter marks for four subjects (each out of 25):\n");
    printf("Subject 1: ");
    scanf("%f", &mark1);
    printf("Subject 2: ");
    scanf("%f", &mark2);
    printf("Subject 3: ");
    scanf("%f", &mark3);
    printf("Subject 4: ");
    scanf("%f", &mark4);

    // Calculate total marks
    total = mark1 + mark2 + mark3 + mark4;

    // Grading system using if-else ladder
    if (total >= 85) {
        grade = 'A';
    } else if (total > 70) {
        grade = 'B';
    } else if (total > 55) {
        grade = 'C';
    } else if (total > 40) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    // Display the result
    printf("\nTotal Marks: %.2f / 100\n", total);
    printf("Grade: %c\n", grade);

    return 0;
}