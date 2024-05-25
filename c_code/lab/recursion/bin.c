#include<stdio.h>
int bin(int num){
	if(num==0)
		return 0;
	else
		return (num%2)+10*bin(num/2);
}
int main(){
	int num,bi;
	printf("Enter no to print binary form: ");
	scanf("%d",&num);
	printf("%d",bin(num));
}
