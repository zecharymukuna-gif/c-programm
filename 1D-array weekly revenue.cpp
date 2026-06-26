/*
Description:1D-array, weekly revenue tracker
Name:Zechary Kamau
Reg No:BDSA-01-0132/2026
Date:26/06/2026
*/
#include <stdio.h>
int main(){
	int i;
	float Revenue[7];
	float Totalrevenue = 0;
	float Averagerevenue;
	
	printf("Weekly Revenue\n");
	
	//for(start;stop;step)
	
	for(i=0;i<7;i++){
		printf("Enter yout Revenue %d:",i+1);
		scanf("%f",&Revenue[i]);
		Totalrevenue = Totalrevenue += Revenue[i];
		
	}
	Averagerevenue = Totalrevenue / 7;
	
	printf("\nThe totalrevenue is %f",Totalrevenue);
	printf("\nAveragerevenue is %f",Averagerevenue);
	
return 0;	
}