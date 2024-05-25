#include<stdio.h>
int main(){
	int i,j,n,check;
	printf("Enter limit: ");
	scanf("%d",&n);
	printf("Prime numbers from 1 to %d\n",n);
	for(i=2;i<=n;i++){
		check=0;
		for(j=2;j<=i/2;j++)
			if(i%j==0) check=1;
		if(check==0) printf("%d\t",i);
	}
}
