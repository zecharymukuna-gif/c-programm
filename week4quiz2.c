/*
Description:loop program, to print numer 1-20
Name:Zechary Kamau Mukuna
Reg No:BDSA-01-0132/2026
Date:13/06/2026
*/
#include <stdio.h>
int main(){
	 
	int secretnumber = 0;
	int guess = 0;
	int attempts = 0;
	
	secretnumber = 12;
	attempts ++;
	
	printf("Chose a number between 1 and 20\n");
	do{
		printf("Enter your guess:");
		scanf("%d",&guess);
		
	if(guess > secretnumber){
		printf("Too high\n");
		
	}	
	else if(guess < secretnumber){
		printf("Too low\n");
	}		
		
	}
	while(guess != secretnumber);
	printf("Congratulations");
    printf("your attempts were 3\n");

	return 0;
}