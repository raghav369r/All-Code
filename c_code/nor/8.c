#include<stdio.h>
#include<string.h>
int main(){
	/*int i,j,n,s;
	char str[100];
	printf("Enter the string: ");
	gets(str);
	for(n=0;str[n]!='\0';n++);
	puts(str);*/
	char str[100]="king KOHLIab",s2[100]="king KOHLIa";
	printf("\n%d",strcmp(str,s2));
}
