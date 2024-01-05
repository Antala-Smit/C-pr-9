//2. C program to read a file and display its contents.

#include<stdio.h>

void main(){
	FILE*file;
	char ch[50];
	file=fopen("pr-1.txt","r");
	
	while(fscanf(file,"%s",ch)!=EOF){
		printf("%s ",ch);
	}
}
