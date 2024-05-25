//Rotating the string 
#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j,k,l;
	char a[20],b[20];
	printf("Eneter the string: ");
	gets(a);
	printf("Enter number to rotate: ");
	scanf("%d",&k);
	l=strlen(a);
	k=k%l;
	for(i=0,j=l-k;j<l;j++,i++) b[i]=a[j];
	for(j=0;j<=l-k;j++,i++) b[i]=a[j];
	b[i]='\0';
	puts(b);
	
}
