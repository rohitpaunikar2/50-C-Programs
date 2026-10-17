#include<stdio.h>

int main(){
    int secret = 7, guess;

    for(int i = 1; i <= secret; i++){
        
    printf("\nEnter Your Guess: ");
    scanf("%d",&guess);

        if(guess == secret){
            printf("Your Guess is Correct!");
             break;
        }
         if(guess < secret){
            printf("Too Low");
        }
        else{
            printf("Too High");
        }
        
    }

}
