
//program to get money from captainsbet

#include <stdio.h>

int main(){
	char nameof_company[11];
	int phone_numberofreceiver;
	float theamountofmoney;

	printf("Enter nameof_company:");
	scanf("%s",&nameof_company);

	printf("Enter phone_numberofreceiver:");
	scanf("%f",&phone_numberofreceiver);

	printf("Enter theamountofmoney:");
	scanf("%f",&theamountofmoney);

	//variable declaration:go into the company's system and putthe money in the phone number

	
	printf("nameof_company = %s\n",nameof_company);
	printf("phone_numberofreceiver = %d\n",phone_numberofreceiver);
	printf("theamountofmoney = %f\n",theamountofmoney);

	return 0;
}
