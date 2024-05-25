#include<stdio.h>
void n1ton(int );
int main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	n1ton(n);
	
}
void n1ton(int n){
	if(n>0){
		printf("%d\n",n);
		n1ton(n-1);
		printf("%d\n",n);
	}
}

