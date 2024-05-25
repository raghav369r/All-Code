#include<stdio.h>
int fabi(int n){
	if(n==0) return 0;
	else if(n==1 || n==2) return 1;
	else return fabi(n-1)+fabi(n-2);
}
int main(){
	int num,sum;
	printf("Enter number to print sum of 1st n fabi: ");
	scanf("%d",&num);
	sum=fabi(num);
	printf("sum= %d",sum);
}
