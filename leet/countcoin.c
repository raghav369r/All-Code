//DP22
#include<stdio.h>
#include<stdlib.h>
int countcoin(int ind,int tar,int *arr,int **dp){
	if(tar==0) return 1;
	if(ind==0) return tar%arr[0]==0;
	if(dp[ind][tar]!=-1) return dp[ind][tar];
	int nottake=countcoin(ind-1,tar,arr,dp);
	int take=0;
	if(arr[ind]<=tar) take=countcoin(ind,tar-arr[ind],arr,dp);
	return dp[ind][tar]=take+nottake;
}
int main(){
	int arr[]={1,3,9};
	int n=3,tar=12;
	int **dp=calloc(n,sizeof(int *));
	for(int i=0;i<n;i++){
		dp[i]=calloc(tar+1,sizeof(int));
		//for(int j=0;j<tar+1;j++) dp[i][j]=-1;
	}
	int i,j,take,nottake;
	//bottom up 
	for(i=0;i<=tar;i++) if(i%arr[0]==0) dp[0][i]=1;
	//for(i=0;i<n;i++) dp[i][0]=1;
	for(i=1;i<n;i++){
		for(j=0;j<tar+1;j++){
			nottake=dp[i-1][j];
			take=0;
			if(arr[i]<=j) take=dp[i][j-arr[i]];
			dp[i][j]=take+nottake;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<tar+1;j++){
			printf("%d ",dp[i][j]);	
		}
		printf("\n");
	}
	printf("%d ",dp[n-1][tar]);
	//printf("%d",countcoin(n-1,tar,arr,dp));
}
