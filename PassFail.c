// Tke 3 paper marks and show result pass in marks in all three paper greater than 45 or show the result fail.
#include<stdio.h>

int main(){
    int a, b, c;
    
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    if(a >= 45 && b >= 45 && c >= 45){
        printf("Pass");
    }
    else{
        printf("Fail");
    }

    return 0;
}