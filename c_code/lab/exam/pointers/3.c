#include<stdio.h>
void conc(char *,char *);
int main(){
	char s1[50],s2[50];
	printf("Enter two strings: ");
	gets(s1);
	gets(s2);
	conc(s1,s2);
	printf("s1= ");
	puts(s1);
	printf("s2= ");
	puts(s2);
}
void conc(char *s1,char *s2){
	while(*s1!='\0') s1++;
	while(*s2!='\0') {
		*s1=*s2;
		s1++;
		s2++;
	}
	*s1='\0';
}
