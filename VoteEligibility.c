#include<stdio.h>

int main() {
   int a;
   printf("Enter your Age: ");
   scanf("%d",a);

   if(a >= 18){
   printf("Eligible to Vote");
   }
   else {
   printf(" Not Eligible to Vote");
   }
   
   return 0;
}