//3. C program to write even, odd  number in seprate file like odd.txt , even.txt.

#include<stdio.h>

void main(){
	FILE *file1;
	FILE *file2;	
	int no,i;
	file1=fopen("even.txt","w");
	file2=fopen("odd.txt","w");

	printf("Enter no:- ");
	scanf("%d",&no);
    
    for(i=1;i<=no;i++){
    	if(i % 2 == 0){
    		printf("Even :- %d ", i);	
    		fprintf(file1," %d ",i);
		}else{
    		printf("Odd :- %d ", i);
    		fprintf(file2," %d ",i);
		}	
	}
}
