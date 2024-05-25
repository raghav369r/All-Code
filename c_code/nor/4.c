#include<stdio.h>
int term(int n){
	int arr[100][100],a,b,s;
	for(a=0;a<=n;a++){
		for(s=0;s<n-a;s++) printf(" ");
		for(b=0;b<=a;b++){
			if(a==0 || b==0 || b==a) arr[a][b]=1;
			else arr[a][b]=arr[a-1][b-1]+arr[a-1][b];
			printf("%d ",arr[a][b]);
		}
		printf("\n");
	}
}
int main(){
	int n,i,j,s;
	printf("Enter noo of rows: ");
	scanf("%d",&n);
	term(n);	
}
