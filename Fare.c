/*
Name:Siddy Chepkurui
Reg no:PA106/G/28720/25
*/

#include <stdio.h>

float calculateFare(float distance){
	return distance * 50;
}

int main(){
	float distance;
	printf("Enter distance traveled (in km): ");
	scanf("%f", &distance);
	
	printf("Total Fare = Ksh. %.2f\n", calculateFare(distance));
	
	return 0;
}