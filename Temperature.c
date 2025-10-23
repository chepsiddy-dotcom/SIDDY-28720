
/*
Name:Siddy Chepkurui
Reg no:PA106/G/28720/25
*/

#include <stdio.h>

double convertToCelsius(double fahrenheit){
    return (fahrenheit - 32) * 5.0 / 9.0;  
}

int main (){
	double fahrenheit = 98.6;
	double celsius = convertToCelsius(fahrenheit);
	printf("%.1f\xb0F is approximately %.0f\xb0C\n",fahrenheit,celsius);
	return 0;
}
