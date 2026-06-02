/*
Description:Program for eligibility for final exams
Name:Zechary Kamau
Dte:05/27/2026
Reg No:BDSA-01-0132/2026
*/

#include <stdio.h>

int main(){
	
	int Name[18];
	float Attendance;
	float Average_marks;
	
	printf("Enter your Name:");
	scanf("%S",&Name);
	
	printf("Enter the Attendance:");
	scanf("%f",&Attendance);
	
	printf("Enter Average_marks:");
	scanf("%F",&Average_marks);
	
	//Variable declaration:If eligible for final exams
	
	if("Attendance>=75%"){
		printf("you are not eligible for final exams\n");
	}
	else if("Average_marks>=40"){
		printf("you are not eligible for final exams\n");
	}
			
	return 0;
}