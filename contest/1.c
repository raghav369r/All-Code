#include<stdio.h>
#include<string.h>
void swap(int i,int j,char *str){
	char tmp=str[i];
	str[i]=str[j];
	str[j]=tmp;
}
void print(char *str,int s,int n){
	if(s==n-1){
		puts(str);
		return;
	}
	for(int i=s;i<n;i++){
		swap(i,s,str);
		print(str,s+1,n);
		swap(i,s,str);
	}
}
int main(){
	char s[4]="abcd";
	print(s,0,strlen(s));
}
