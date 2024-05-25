#include<stdio.h>
void n1ton(int );
void nto1(int );
void nnto1(int );
int main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	//n1ton(n);
	nto1(n);
}
void nto1(int n){
	if(n>0){
		
		printf("%d\n",n);
		nto1(n-1);
		printf("%d\n",n);
	}
	else return;
}
void n1ton(int n){
	if(n>0){
		n1ton(n-1);
		printf("%d\n",n);
	}
	else return;
}
