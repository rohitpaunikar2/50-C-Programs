#include<stdio.h>

int main(){
    int num, rem, rev = 0;

    printf("Enter the Number: ");
    scanf("%d",&num); 
    rem = num % 10;
    rev = rem * 10000;

    num /= 10;
    rem = num%10;
    rev += rem * 1000;

    num /= 10;
    rem = num % 10;
    rev += rem * 100;

    num /= 10;
    rem = num % 10;
    rev += rem * 10;

    num /= 10;
    rev += num;

    printf("%d",rev);

    return 0;
}