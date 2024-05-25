#include<stdio.h>
int revnum(int );
int main(){
	int num,rev;
	printf("Enter the number: ");
	scanf("%d",&num);
	rev=revnum(num);
	printf("%d",rev);
}
int revnum(int n){
	static int sum=0;
	int rem;
	if(n>0){
		rem=n%10;
		n/=10;
		sum=sum*10+rem;
		revnum(n);
	}
	else {
		//printf("-->%d\n",sum);
		return sum;
	}
}
