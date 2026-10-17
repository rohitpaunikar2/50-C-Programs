#include <stdio.h>

int main() {
    int choice;
    double num1, num2;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    // Only switch-case for all decisions – no loops, no if-else for menu
    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            // Only safety check – not a menu branch
            if (num2 == 0)
                printf("Error: Division by zero is not allowed.\n");
            else
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            break;

        case 5:
            printf("Exiting calculator. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Please enter a number between 1 and 5.\n");
    }

    return 0;
}