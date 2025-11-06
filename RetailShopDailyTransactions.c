/*
Name :Siddy Chepkurui
Reg No :PA106/G/28720/25
Program to read daily transaction amounts from a file and calculate total sales
*/

#include <stdio.h>

#define FILENAME "transactions.txt"

int main(){
	FILE *fp;
	double transaction_amount;
	double total_sales = 0.0;
	
	//open file (i)
	if ((fp = fopen(FILENAME, "r")) == NULL){
		perror("Error opening file");
		return 1;
	}
	
	//Read and Calculate (i & ii)
	//Reads doubles from the file until EOF
	while (fscanf(fp, "%lf", &transaction_amount) == 1){
		total_sales += transaction_amount;
	}
	
	//close file (iii)
	fclose(fp);
	
	// Display total (ii)
	printf("Total sales for the day: $%.2f\n", total_sales);
	
	return 0;
	
 }