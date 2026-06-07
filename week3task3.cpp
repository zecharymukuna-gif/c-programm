/*
Description:program to display data bundles
Name:Zechary Kamau
Reg NO:BDSA-01-0132
Date:06/06/2026
*/

#include <stdio.h>

int main(){
	int bundle_choice;
	float cost;
	
	//Choose your bundle_choice;
	
	printf("Enter the bundle_choice:\n");
	printf("100 MB bundle_choice @ cost 50 KES:\n");
	printf("500 MB bundle_choice @ cost 200 KES:\n");
	printf("1 GB bundle_choice @ cost 350 KES:\n");
	printf("2 GB bundle_choice @ cost 600 KES:\n");
	printf("Enter your choice (1-4):");
	scanf("%d", bundle_choice,&bundle_choice);
	
	switch(bundle_choice){
		case 1:
			printf("You selected 100 MB bundle_choice. cost @ 50 KES\n");
			break;
		
		case 2:
			printf("You selected 500 MB bundle_choice. cost @ 200 KES\n");
			break;
		
		case 3:
			printf("You selected 1 GB bundle_choice. cost @ 350 KES\n");
			break;
		
		case 4:
			printf("You selected 2 GB bundle_choice. cost @ 600 KES\n");
			break;
		
		default:
			printf("Invalid choice\n");
	}
	return 0;
}