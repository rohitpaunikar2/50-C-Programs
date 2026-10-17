#include <stdio.h>

int main() {
    int choice;
    int a, b;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Division_Remainder\n");
    printf("6. PreIncrement\n");
    printf("7. PostIncrement\n");
    printf("8. PreDecrement\n");
    printf("9. PostDecrement\n");
    printf("10. UnaryPlus\n");
    printf("11. UnaryMinus\n");


    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%d", &a);

     printf("Enter second number: ");
    scanf("%d", &b);


    if (choice == 1) {
        printf("Result = %d", a + b);
    }
    else if (choice == 2) {
        printf("Result = %d", a - b);
    }
    else if (choice == 3) {
        printf("Result = %d", a * b);
    }
    else if (choice == 4) {
        printf("Result = %d", a / b);
    }
    else if (choice == 5) {
        printf("Result = %d", a % b);
    }
    else if (choice == 6) {
        printf("Result = %d", ++a, ++b);
    }
    else if (choice == 7) {
        printf("Result = %d", a++, b++);
    }
    else if (choice == 8) {
        printf("Result = %d", --a , --b);
    }
    else if (choice == 9) {
        printf("Result = %d", a-- , b--);
    }
    else if (choice == 10) {
        printf("Result = %d", +a, +b);
    }
    else if (choice == 4) {
        printf("Result = %d", -a , -b);
    }
    else {
        printf("Invalid choice");
    }

    return 0;
}