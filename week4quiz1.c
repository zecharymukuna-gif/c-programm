/*
Description:Loop program,for withdrawal of money
Name:Zechary Kamau
Reg No:BDSA-01-0132/2026
Date:06/08/2026
*/

//While loop, program to withdraw money

#include <stdio.h>

int main(){
	
	int i = 0;
	int balance = 1000;
	
	
	while(balance <= 1000){
		
		printf("Enter the value:");
		scanf("%d" ,&i);
		printf("The value is: %d\n",i);
	    balance -= i;
	    printf("The balance is:%d\n",balance);
	    
	    
	}
	printf("The balance is less than 1000\n");
	printf("Loop body finished\n");
	return 0;
}
