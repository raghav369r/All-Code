#include<stdio.h>
int power(int ,int );
int main(){
	int x,y,res;
	printf("Enter x,y to find x^y: ");
	scanf("%d%d",&x,&y);
	res=power(x,y);
	printf("%d",res);
}
int power(int x,int y){
	static int sum=1;
	if(y>0){
		sum=sum*x;
		power(x,y-1);
	}
	else return sum;
}
