#include<stdio.h>
#include<stdlib.h>
int max(int a,int b){
	if(a>b) return a;
	return b;
}
int main(){
	int wt[]={2,4,6},p[]={5,11,13},w=10,n=3,i,j;
	int *dp=calloc(w+1,sizeof(int));
	for(i=0;i<w+1;i++)
		dp[i]=p[0]*(i/wt[0]);
	for(i=1;i<n;i++){
		for(j=0;j<=w;j++){
			int nottake=dp[j];
			int take=-1e9;
			if(wt[i]<=j)
				take=p[i]+dp[j-wt[i]];
			dp[j]=max(take,nottake);
		}
	}
	printf("%d \n",dp[w]);
}
