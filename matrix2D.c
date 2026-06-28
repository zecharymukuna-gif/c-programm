/*
Description:array -2D
Name:Zechary Kamau
Date:22/06/2026
Reg No:BDSA-01-0132/2026
*/
#include <stdio.h>
int main (){
	int marks [2][2][3] ={
	{
	{10,20,30},
	{40,50,60}	
	},
	{	
	{1,2,3},
	{4,5,6}			
	}
};	
	int i;
	int j;
	int k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<3;k++){
			
				printf("%d\t", marks[i][j][k]);		
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}	
	
