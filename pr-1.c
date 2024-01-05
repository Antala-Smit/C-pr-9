//1. C program to create a file and write data into file.

#include<stdio.h>

void main(){
	FILE*file;
	char ch[50];
	file=fopen("pr-1.txt","w");
	printf("My name is Smit Antala");
	fprintf(file,"My name is Smit Antala",ch);
}
