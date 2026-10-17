#include<stdio.h>

int prime(int n){
    int flag = 0;

    if(n == 0 && n==1){
        flag = 1;
    }
    else{
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                flag = 1;
                break;
            }
        }
    }
    return flag;
}

int main(){
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);

    result = prime(n);
    if(result == 0){
        printf("%d is a prime number.\n", n);
    }
    else{
        printf("%d is not a prime number.\n", n);
    }

return 0;
}