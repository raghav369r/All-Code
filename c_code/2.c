#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	char **p=calloc(5,sizeof(char*));
	for(i=0;i<5;i++);
	//	p[i]=calloc(10,sizeof(char));
	for(i=0;i<5;i++)
		scanf("%s",p[i]);
	for(i=0;i<5;i++)
		printf("\n%s",p[i]);
}
