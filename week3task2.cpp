/*
Description:Programm to calculate water bill
Name:Zechary Kamau
Date:05/27/2026
Reg No:BDSA-01-0132/2026
*/

#include <stdio.h>

int main(){
	
	float Units_consumed;
	float Total_bill;
	
	
	printf("Enter Units_consumed:");
	scanf("%f",&Units_consumed);
	
	
	if (Units_consumed <= 30){
		Total_bill = 30*20;
	}
	
  else if(Units_consumed<=60){
          Total_bill=60*25;
	}
	
else if(Units_consumed > 60){
		 Total_bill = 30*60;
	}
	//Calculate Total_bill
	
	printf("Total_bill %f\n", Total_bill);
	
	return 0;
}