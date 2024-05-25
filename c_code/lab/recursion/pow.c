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
	if(y==1) return x;
	else if(y==0) return 1;
	else return x*power(x,y-1);
}
