#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n,guess=1;
    srand(time(0));
    int number = rand()%100 + 1;
    do{
    printf("Guess the number between 1 and 100!\n");
    scanf("%d",&n);
    if(n<number){
        printf("Higher number please!\n");
    }else if(n>number){
        printf("Lower number please!\n");
    }else{
        printf("congratulation! you guessed it in %d chance\n",guess);
    }
    guess++;
    }while(n!=number);

    // while (n!=number)
    // {
    //     printf("Guess the number between 1 and 100!\n");
    //     scanf("%d",&n);
    //     if(n<number){
    //     printf("Higher number please!\n");
    // }else if(n>number){
    //     printf("Lower number please!\n");
    // }else{
    //     printf("congratulation! you guessed it in %d chance\n",guess);
    // }
    // guess++;
    // }

    // int guess;
    // for(int guess=1; guess!=number; guess++){
    //      printf("Guess the number between 1 and 100!\n");
    //     scanf("%d",&guess);
    //     if(guess<number){
    //     printf("Higher number please!\n");
    // }else if(guess>number){
    //     printf("Lower number please!\n");
    // }else{
    //     printf("congratulation! you guessed it in %d chance\n",guess);
    // }
    
    // }
    
    return 0;
}