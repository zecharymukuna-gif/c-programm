//program to offer a loan

/*

Description:program to offer a loan
Name:Zechary Kamau
Date:23/05/2026
Reg NO:BDSA-01-0132/2026
Version 1
*/

#include <stdio.h>

int main(){
	
	int age;
	float income;
	
	printf("enter your age:");
	scanf("%d",&age);
	
	printf("enter your income:");
	scanf("%d",&income);
	
	if(age>=21 && income>=21000){
		printf("congratulations for you qualify for a loan\n");
		}
	else{
		printf("unfortunately we are unable to offer you a loan at this time\n");
		}
			
 	return 0;
			
} 
	