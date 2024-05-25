#include<stdio.h>
int main(){
	char str[20],ovels[10]="aeiouAEIOU";
	int i,j,len,k;
	printf("Enter the string: ");
	gets(str);
	for(len=0;str[len]!='\0';len++);
	for(i=0;i<len;i++){
		for(j=0;j<10;j++){
			if(str[i]==ovels[j]){
				for(k=i;k<len;k++) str[k]=str[k+1];
				len--;
			}
		}
	}
	printf("String without ovels: %s",str);
}
