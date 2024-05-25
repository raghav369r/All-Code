#include<stdio.h>
#include<stdlib.h>
void divi(int a,int b){
	int q=0,s;
	s=(a*b<0)?-1:1;
	a=abs(a);
	b=abs(b);
	while(a>=b){
		a-=b;
		q++;
	}
	printf("quotient= %d\n",q*s);
	printf("remainder= %d ",a);
}
int mul(int a,int b){
	int s=1,mul=0;
	if((a<0 && b>=0)||(a>=0 && b<0)) s=-1;
	while(a>0){
		mul+=b;
		a--;
	}
	return mul;	
}
int main(){
	int a,b,q=0,s;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	divi(a,b);
	printf("\na*b= %d",mul(a,b));
}
