#include<stdio.h>
#include<stdlib.h>
int sumk(int *arr,int sum,int ind,int **dp){
	if(sum==0) return 1;
	if(ind==0) return sum==arr[0];
	if(dp[ind][sum]!=-1) return dp[ind][sum];
	int notpick=sumk(arr,sum,ind-1,dp);
	int pick=0;
	if(arr[ind]<=sum) pick=sumk(arr,sum-arr[ind],ind-1,dp);
	return dp[ind][sum]=notpick+pick;
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8};
	int k=6;
	int **dp=calloc(8,sizeof(int*));
	for(int i=0;i<8;i++){
		dp[i]=calloc(k+1,sizeof(int));
		for(int j=0;j<=k;j++) dp[i][j]=-1;
	}
	printf("no of subsets of sum:%d= %d",k,sumk(arr,k,8-1,dp));
}
