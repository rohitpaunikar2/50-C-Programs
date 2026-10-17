
#include <stdio.h>

int main() {
    int n, rem, decimal = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        n = n / 10;
    }

    printf("Decimal number = %d\n", decimal);

    return 0;
}
