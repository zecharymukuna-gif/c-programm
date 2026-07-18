/*
Description: C files, to store and retrieve products
Name: Zechary Kamau
Reg No: BDSA-01-0132/2026
Date: 07/17/2026
*/
#include <stdio.h>
#include <stdlib.h>

void addproduct();
void displayproduct();
void searchproduct();
int main(){
    addproduct();
    displayproduct();
    searchproduct();


}
void addproduct(){
    char product_ID[8];
    char product_name[20];
    int quantity;
    float unit_price;

    FILE *fptr;

    fptr = fopen("c:\\Users\\Administrator\\OneDrive\\Desktop\\Cfiles\\products.txt","w");

    if(fptr == NULL){
        printf("Error! creating file\n");
        exit(1);
    }

    printf("Enter product ID: ");
    scanf("%s", product_ID);

    printf("Enter product name: ");
    scanf("%s", product_name);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    fprintf(fptr, "Product ID: %s\n", product_ID);
    fprintf(fptr, "Product Name: %s\n", product_name);
    fprintf(fptr, "Quantity: %d\n", quantity);
    fprintf(fptr, "Unit Price: %.2f\n", unit_price);

    fclose(fptr);
    printf("Products written successfully.\n");
}
void displayproduct(){
	char product_ID[8];
    char product_name[20];
    int quantity;
    float unit_price;
    

    FILE *fptr;

    fptr = fopen("c:\\Users\\Administrator\\OneDrive\\Desktop\\Cfiles\\products.txt","r");

    if(fptr == NULL){
        printf("Error! opening file\n");
        exit(1);
    }

    fscanf(fptr, "Product ID: %s\n", product_ID);
    fscanf(fptr, "Product Name: %s\n", product_name);
    fscanf(fptr, "Quantity: %d\n", &quantity);
    fscanf(fptr, "Unit Price: %f\n", &unit_price);

    printf("Product ID: %s\n", product_ID);
    printf("Product Name: %s\n", product_name);
    printf("Quantity: %d\n", quantity);
    printf("Unit Price: %.2f\n", unit_price);

    fclose(fptr);
    printf("Products read successfully.\n");
}

void searchproduct(){
    char product_ID[8];
    char product_name[20];
    int quantity;
    float unit_price;

    FILE *fptr;

    fptr = fopen("c:\\Users\\Administrator\\OneDrive\\Desktop\\Cfiles\\products.txt","a");

    if(fptr == NULL){
        printf("Error! product not found \n");
        exit(1);
    }
    printf("Enter product ID to search: ");
    scanf("%s", product_ID);

    fscanf(fptr, "Product ID: %s\n", product_ID);

    fclose(fptr);
    printf("product details found succesfully \n");
}