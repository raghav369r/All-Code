#include<stdio.h>
int main(){
	char *ptr="raghav redddy";
	char *start=ptr;
	int len;
	start=ptr;
	while(*ptr!='\0') {
		printf("%c at the address %u\n",*ptr,ptr);
		ptr++;
	}
	len=ptr-start;
	printf("%d\n",len);
}
