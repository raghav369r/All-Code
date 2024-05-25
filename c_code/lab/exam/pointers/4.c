#include<stdio.h>
int main(){
	char *(ptr[4])={"raghav","reddyy","king","kohli"};
	printf("Enter strings: ");
	/*gets(ptr[0]);//"chinna";
	gets(ptr[1]);//"chinna";
	gets(ptr[2]);//"chinna";
	gets(ptr[3]);//"chinna";*/
	printf("Entered strings are: \n");
	puts(ptr[0]);
	puts(ptr[1]);
	puts(ptr[2]);
	puts(ptr[3]);
	for(int i=0;i<4;i++) puts(ptr[i]);
}
