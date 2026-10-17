#include <stdio.h>

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int subtract(int a, int b)
{
    int c;
    c = a - b;
    return c;
}

int multiply(int a, int b)
{
    int c;
    c = a * b;
    return c;
}

int divide(int a, int b)
{
    int c;
    c = a / b;
    return c;
}

int main()
{
    int choice;
    int a, b, c;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (choice == 1)
    {
        c = add(a, b);
        printf("Add = %d", c);
    }
    else if (choice == 2)
    {
        c = subtract(a, b);
        printf("Subtract = %d", c);
    }
    else if (choice == 3)
    {
        c = multiply(a, b);
        printf("Multiplication = %d", c);
    }
    else if (choice == 4)
    {
        c = divide(a, b);
        printf("Division = %d", c);
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}


