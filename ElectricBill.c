/*
Name :Siddy Chepkurui
Reg no :PA106/G/28720/25
*/

#include <stdio.h>

int calculateElectricBill(int units){
	int bill = 0;
	
	if(units <= 100){
		bill = units * 10;
    }else if (units <=200){
		bill = (100 * 10 ) + (units - 100) * 15;
	} else{
		bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
	}
	return bill;
}

int main () {
	int units;
	printf("Enter the number of units consumed: ");
	scanf("%d",&units);
	
	printf("Total Bill = Ksh. %.2d\n", calculateElectricBill(units));
	return 0;
}