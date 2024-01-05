//4. C program to write storing employees information like emp_id,emp_name,emp_salary.

#include<stdio.h>

struct employee{
	char name[30];
	int id,salary;
};

void main(){
	struct employee e1;
	
	printf("Enter Details\n");
	printf("Enter Name :- ");
	gets(e1.name);
	printf("Enter Id :- ");
	scanf("%d",&e1.id);
	printf("Enter salary :- ");
	scanf("%d",&e1.salary);
	
	printf("\nEnter Details\n");
	printf("Employ Name :- %s\n",e1.name);	
	printf("Employ Id :- %d\n",e1.id);
	printf("Employ Salary :- %d\n",e1.salary);
}

