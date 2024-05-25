#include<stdio.h>
void convertint(int n,int base){
	if(n<base){
		printf("%d",n);
		return;
	}
	else{
		convertint(n/base,base);
		printf("%d",n%base);
	}
}
void convertdec(float num,int base){
	int n=(num<0.09)?10:5;
	for(int i=1;i<n&&num!=0;i++){
		num*=base;
		int b=num;
		num-=b;
		printf("%d",b);
	}
}
void binary(float n){
	int a=n;
	convertint(a,2);
	printf(".");
	convertdec(n-a,2);
}
void octaltobin(float n){
	int a=n;
	convertint(a,8);
	printf(".");
	convertdec(n-a,8);	
}
int main(){
	while(1){
		float n;
		printf("enter decimal to convert(-1 to exit): ");
		scanf("%f",&n);
		if(n==-1) break;
		printf("%f= ",n);
		binary(n);
		//octaltobin(n);
		printf("\n");	
	}
}
