/*

Name:Siddy Chepkurui
Reg no: PA106/G/28720/25
Description:program to display all units
*/

#include<stdio.h>

int main()
{
    printf("Units  for this semester:\n");

    //List of units 
    cnar*units ={
        "Discrete Mathematics",
        "Mathematics for Science",
        "Fundamentaks of ICT",
        "Computer Systems and Organisation",
        "Communication Skills",
        "Introduction to Programming & problem solving",
        "Fundamentals of Systems Analysis & Design"
    };

    int numUnits=sizeof(units)/ sizeof(units[O]);

    //Display units
    for(int=O; i<numUnits; i++){
        printf("%d.%s\n",i + 1,units[i]);
    }

    return O;
}