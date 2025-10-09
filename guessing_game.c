
Name: Siddy Chepkurui
Reg no:PA106/G/28720/25


/* program to implement a guessing game where the user has to guess a randomly generated number between 1 and 20.The program 
provides feedback on whether the guess is too high or too low and keeps track of the number of attempts made by the user. 
*/



#include<stdio.h>
#include<stdlib.h>.
#include<time.h>

int main(){
    int secret,guess,attempts=0
    //seed the random number generator srand(time(0));
    secret = rand() %20 + 1;//random number between 1 and 20

    printf("Guess the number(1 - 20):\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d",&guess);
        attempts++;

        if(guess > secret)
            printf("Too high!\n")7;
        else if (guess <secret)
            printf("Too low!\n");
        else{
            printf("Total attemps:%d\n",attempts);
        }
    }
    return 0;
}