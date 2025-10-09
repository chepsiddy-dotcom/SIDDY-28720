/*

Name:Siddy Chepkurui
Reg no:PA106/G/28720/25
Description:programe for calculating volume of a cylinder

*/

#include <stdio.h>
#define pi 3.142

int main(){
	float radius, height, volume, surface_area;
	printf("enter the radius of the cylinder:");
	scanf("%f",&radius);
	printf("enter height of the cylinder:");
	scanf("%f" ,&height);
	volume=pi*radius*radius*height;
	surface_area=2*pi*radius*radius + 2*pi*radius*radius*height;
	printf("\n Volume of the cylinder= %.2f\n",volume);
    printf("Surface area of the cylinder = %.2f\n", surface_area);
    
    return 0;

    }
