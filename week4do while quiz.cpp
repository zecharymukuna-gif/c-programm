/*
Description:loop program,to print password
Name:Zechary Kamau Mukuna
Reg No:BDSA-01-0132/2026
Date:12/06/2026
*/
#include <stdio.h>
int main(){
	int password;
	do{
		printf("Enter password:");
		scanf("%d",&password);
		
		if(password !=1234){
			printf("Incorrect password,try again\n");	
		}
	}
	while(password != 1234);
	printf("Access granted");
	
	return 0;
}
