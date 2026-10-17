#include<stdio.h>

int main(){

    float P, R, T, SI;

    printf("Enter P: ");
    scanf("%f", &P);

   printf("Enter R: ");
    scanf("%f", &R);

    printf("Enter T: ");
    scanf("%f", &T);

    SI = (P*R*T)/100;

   printf("Simple Interest = %.2f", SI);
   
    return 0;
}