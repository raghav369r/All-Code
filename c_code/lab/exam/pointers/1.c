#include<stdio.h>
void swap(int *a,int *b){
	int c=*b;
	*b=*a;
	*a=c;
}
int main(){
	int a=10,b=20;
	swap(&a,&b);
	printf("a=%d , b=%d",a,b);
}
