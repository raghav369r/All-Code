#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char *str;
	str=(char *)calloc(5,sizeof(char));
	strcpy(str,"raghu");
	printf("\n-->%s",str);
	str=realloc(str,10);
	printf("\n-->%s",str);
	str=realloc(str,5);
	printf("\n-->%s",str);
}

