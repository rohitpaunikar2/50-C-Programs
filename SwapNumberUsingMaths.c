#include<stdio.h>

int main(){
int a, b;
    printf("Enter a: ");
    scanf("%d",&a);

    printf("Enter b: ");
    scanf("%d",&b);

    a = a + b; // a = 7 + 5 = 12
    b = a - b; // b = 12 - 5 = 7
    a = a - b; // a = 12 - 7 = 5

    printf("After Swapping: a = %d,b = %d", a,b);

    return 0;
}
