#include<stdio.h>
int main(){
	int n=3,j,i;
	for(i=1;i<=n;i++){
		for(j=1;j<2*i;j++) printf("* ");
		printf("\n");
	}
	for(i=n-1;i>0;i--){
		for(j=1;j<2*i;j++) printf("* ");
		printf("\n");
	}
}
