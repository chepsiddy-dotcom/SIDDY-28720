/*

Name:Siddy Chepkurui
Reg no:PA106/G/28720/25 
Program:water bill 
Date:02/10/2025

*/
//Program to calculate water bill

int main(){

int units;
float bill;

printf("Enter water units consumed: ");
scanf("%d", &units);

if(units <= 30){
	bill = units * 20.0;
} else if(units <= 60){
	bill = units * 25.0;
} else if(units > 60){
	bill = units * 30.0;
}
printf("The total bill :%.2f KES", bill);

return 0;

}