/*
Description:employees payroll
Name:Zechary Kamau
RegNo:BDSA-01-0132/2026
Date:30/06/2026
*/
#include <stdio.h>
#include <string.h>
struct Employee{
    char Name[2];
    int ID;
    char Department;
    float salary;
    float allowance;
    float Gross_salary;
} ;
int main(){
    char Name[2];
    int i;
    
    printf("Employees payroll\n");
    
    for(i=0;i<2;i++){
        printf("Name = %d\n",i+1);
        	
    }

    struct Employee Emp1, Emp2;
    
    Emp1.Gross_salary=Emp1.salary+Emp1.allowance;
    Emp2.Gross_salary=Emp2.salary+Emp2.allowance;
    
    printf("Enter Name of Emp1:");
    scanf("%s",&Emp1.Name);
    
    printf("Enter ID of Emp1:");
    scanf("%d",&Emp1.ID);
    
    printf("Enter Department of Emp1:");
    scanf("%s",&Emp1.Department);
    
    printf("Enter Salary of Emp1:");
    scanf("%f",&Emp1.salary);
    
    printf("Enter Allowance of Emp1:");
    scanf("%f",&Emp1.allowance);
    
    printf("Enter Name of Emp2:");
    scanf("%s",&Emp2.Name);
    
    printf("Enter ID of Emp2:");
    scanf("%d",&Emp2.ID);
    
    printf("Enter Department of Emp2:");
    scanf("%s",&Emp2.Department);
    
    printf("Enter Salary of Emp2:");
    scanf("%f",&Emp2.salary);
    
    printf("Enter Allowance of Emp2:");
    scanf("%f",&Emp2.allowance);
    
    
    
    printf("\nEmp1 Details\n");
    printf("Name:%s\n",Emp1.Name);
    printf("ID:%d\n",Emp1.ID);
    printf("Department:%s\n",Emp1.Department);
    printf("Salary:%.2f\n",Emp1.salary);
    printf("Allowance:%.2f\n",Emp1.allowance);
    printf("Gross Salary:%.2f\n",Emp1.Gross_salary);

    printf("\nEmp2 Details\n");
    printf("Name:%s\n",Emp2.Name);
    printf("ID:%d\n",Emp2.ID);
    printf("Department:%s\n",Emp2.Department);
    printf("Salary:%.2f\n",Emp2.salary);
    printf("Allowance:%.2f\n",Emp2.allowance);
    printf("Gross Salary:%.2f\n",Emp2.Gross_salary);

    return 0;
}