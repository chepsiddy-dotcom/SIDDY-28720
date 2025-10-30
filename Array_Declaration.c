/*

Name:Siddy Chepkurui
Reg no:PA106/G/28720/25
Prompt:Array Declaration Program

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
void weeklyRevenue();
void roomOccupancyOneBranch();
void multipleBranches();

int main(){
	weeklyRevenue();
	roomOccupancyOneBranch();
	multipleBranches();
	return 0;
}

// 1D Array - Weekly Revenue Tracker
void weeklyRevenue(){
	float revenue[7], total =0;
	const char* days[] = {"Monday", "Tuesday", "Wednesday", "Thursday",
	 "Friday", "Saturday", "Sunday"};
	 int i;
	 
	 printf("Enter revenue for each day of the week:\n"); 
	 for (i = 0; i < 7; i++){
		 printf("%s: ", days[i]);
		 scanf("%f", &revenue[i]);
		 total += revenue[i];
	 }
	 
	 printf("\nTotal weekly revenue: %.2f\n",total );
	 printf("Average daily revenue: %.2f\n\n",total / 7);
	 
}

//2D Array - Room Occupancy (One Branch)
void roomOccupancyOneBranch(){
	int occupancy[5][10];
	int occupiedCount[5] ={0},vacantCount[5] = {0};
	int floor , room;
	
	
	srand(time(NULL));
	
	for (floor = 0; floor < 5; floor++){
		for (room = 0; room < 10; room++){
			occupancy[floor][room] = rand() % 2;
			
			if (occupancy[floor][room] == 1){
				occupiedCount[floor]++;
			} else {
				vacantCount[floor]++;
			}
		}
	}
	
	for (floor = 0; floor < 5; floor++){
		printf("Floor %d - Occupied: %d, Vacant: %d\n", floor + 1, occupiedCount[floor], vacantCount[floor]);
	}
}
//3D Array - Multiple Branches
void multipleBranches(){
	int chain[3][5][10];
	int totalOccupied = 0;
	int branch, floor, room;
	
	srand(time(NULL));
	
	for (branch = 0; branch < 3; branch++){
		for (floor = 0; floor < 5; floor++){
			for (room = 0; room < 10; room++){
				chain[branch][floor][room] = rand() % 2; // 0 or 1
				totalOccupied += chain[branch][floor][room];
			}
		}
	}
	
	printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);
}