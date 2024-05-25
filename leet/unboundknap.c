#include<stdio.h>
#include<stdlib.h>
int max(int a,int b){
	if(a>b) return a;
	return b;
}
int knap(int ind,int w,int *wt,int *p,int **dp){
	if(ind==0) return p[0]*(w/wt[0]);
	if(dp[ind][w]!=-1) return dp[ind][w];
	int nottake=knap(ind-1,w,wt,p,dp);
	int take=-1e9;
	if(wt[ind]<=w) 
		take=p[ind]+knap(ind,w-wt[ind],wt,p,dp);
	return dp[ind][w]=max(nottake,take);
}
int main(){
	int wt[]={2,4,6},p[]={5,11,13},w=10,n=3,i,j;
	int **dp=calloc(n,sizeof(int*));
	for(i=0;i<n;i++)//{
		dp[i]=calloc(w+1,sizeof(int));
	/*	for(j=0;j<=w;j++)
			dp[i][j]=-1;
	}
	printf("%d ",knap(n-1,w,wt,p,dp));*/
	for(i=0;i<w+1;i++)
		dp[0][i]=p[0]*(i/wt[0]);
	for(i=1;i<n;i++){
		for(j=0;j<=w;j++){
			int nottake=dp[i-1][j];
			int take=-1e9;
			if(wt[i]<=j)
				take=p[i]+dp[i][j-wt[i]];
			dp[i][j]=max(take,nottake);
		}
	}
	printf("%d \n",dp[n-1][w]);
}
