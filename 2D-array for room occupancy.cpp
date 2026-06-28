/*
Description:2D-array, Room occupancy
Name:Zechary Kamau
Date:27/06/2026
Reg No:BDSA-01-0132/2026
*/
#include <stdio.h>
int main(){
	float occupancy [5][10];
	int Occupiedrooms = 1;
	int Vacantrooms = 0;
	int i,j;
	
	printf("Room Occupancy(One Branch)\n");
	//for(start;stop;step);
	for(i=0;i<5;i++){
		printf("floors = %d\n",i+1);
		
		for(j=0;j<10;j++){
			printf("rooms = %d\n",j+1);
		}
	}
	if(occupancy[i][j] == 1){
		Occupiedrooms++;
	}
	
	else{
		Vacantrooms ++;
	}
	printf("Occupiedrooms are %d\n",Occupiedrooms);
	printf("Vacantrooms are %d\n",Vacantrooms);
	
	return 0;
}