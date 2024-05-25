#include<stdio.h>
int gcd(int ,int );
int main(){
	int n1,n2,gcd1;
	printf("Enter two numbers: ");
	scanf("%d%d",&n1,&n2);
	gcd1=gcd(n1,n2);
	printf("%d",gcd1);
}
int gcd(int a,int b){
	int n;
	if (a==b) return a;
	if (a>b) gcd(a-b,b);
	else gcd(a,b-a);
}
