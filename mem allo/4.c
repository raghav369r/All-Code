#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char *str;
	str=(char *)calloc(5,sizeof(char));
	strcpy(str,"raghu");
	printf("-->%s\n",str);
	free(str);
	printf("-->%u",str);
	//str=realloc(str,20);
	printf("-->%s\n",str);
	strcpy(str,"King Of The Kings");
	printf("-->%s\n",str);
}

