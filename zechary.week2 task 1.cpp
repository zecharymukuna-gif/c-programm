//program tofind the volume and surface area of a cylinder

/*
Description:program to display volume and surface area of a cylinder
Name:zechary kamau
Reg no:BDSA-01-0132/2026
Date:23/06/2026
version 1
*/

#include <stdio.h>

int main(){
	
	int radius,height;
	float volume;
	float surface_area;
	const float pi=3.142;
	
	printf("enter radius:");
	scanf("%f",&radius);
	
	printf("enter the height:");
	scanf("%f",&height);
	
	//the calculations of the cylinder
	volume=3.142* radius*radius*height;
	surface_area=2*3.142*radius*radius*+2*3.142*radius*height;

	printf("the volume of cylinder is %2f\n",volume);
	printf("the surface_area of cylinder is %2f\n",surface_area);
	
	return 0;
}

