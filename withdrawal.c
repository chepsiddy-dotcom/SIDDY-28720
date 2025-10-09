
Name:Siddy Chepkurui
Reg no:PA106/G/28720/25

/*
While loop program to stimulate a withdrawal system where the user can withdraw money from their account until yhe balance is insufficient.
*/

#include <stdio.h>

int main(){
   int amount:
    int balance = 2000 ://start
    printf(" Your current balance is %d \n,balance");


    while(balance>0){  //stop
     
        printf("Enter the amount to withdraw \n");
        scanf("%f", amount);
        balance-= amount;   // step, balance = balance - amount 
        printf("New Balance: = %f  \n ", balance);
     }
    printf("Insufficient");

    return 0;
    
} 