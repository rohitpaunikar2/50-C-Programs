#include<stdio.h>

int main(){
    int c;
    float f;
    printf("Enter c: ");
    scanf("%d", &c);

    f = (c*1.8) + 32;

   printf("%f", f);
   
    return 0;
}