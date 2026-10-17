#include<stdio.h>

int main(){
    int year;

    printf("Enter an year: ");
    scanf("%d", &year);

    if(( year % 4 == 0 && year % 400 == 0) || year % 10 != 0){
        printf("The Year Given is a Leap Year");
    }
    else{
        printf("The Year Given is not a Leap Year");
    }

    return 0;
}