#include<stdio.h>

int main(){
    // Method 1:- Extra Variable
    int a, b, temp;
    printf("Enter a: ");
    scanf("%d",&a);

    printf("Enter b: ");
    scanf("%d",&b);

   temp = a;
   a = b;
   b = temp;

   printf("After Swapping: a = %d,b = %d", a,b);

   return 0;

  
