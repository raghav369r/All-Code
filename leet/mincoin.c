#include<stdio.h>
#include<stdlib.h>
int min(int a,int b){
	if(a<b) return a;
	else return b;
}
int mincoins(int tar,int ind,int *arr,int **dp){
	if(tar==0) return 0;
	if(ind==0){
		if(tar%arr[0]==0) return tar/arr[0];
		else return 1e9;
	}
	if(dp[ind][tar]!=-1) return dp[ind][tar];
	int nottake=mincoins(tar,ind-1,arr,dp);
	int take=1e9;
	if(arr[ind]<=tar) take=1+mincoins(tar-arr[ind],ind,arr,dp);
	return dp[ind][tar]=min(nottake,take);
}
int main(){
	int arr[]={6,11,21,7,17},n=5;
	int **dp=calloc(n,sizeof(int *));
	int i,j,tar=100;
	int *pre=calloc(tar+1,sizeof(int));
	int *cur=calloc(tar+1,sizeof(int));
	for(i=0;i<tar+1;i++)
		if(i%arr[0]==0) pre[i]=i/arr[0];
		else pre[i]=1e9;
	cur[0]=0;
	for(i=1;i<n;i++){
		for(j=1;j<tar+1;j++){
			int nottake=pre[j];
			int take=1e9;
			if(arr[i]<=j) take=1+cur[j-arr[i]];
			cur[j]=min(take,nottake);
		}
		int *tmp=pre;
		pre=cur;
		cur=pre;
	}
	int res=pre[tar];
	if(res>=1e9) res=-1;
	printf("min coins: %d",res);
}
/*int botup(){
	for(i=0;i<n;i++) dp[i]=calloc(tar+1,sizeof(int));
	for(i=0;i<=tar;i++){
		if(i%arr[0]==0) dp[0][i]=i/arr[0];
		else dp[0][i]=1e9;
	}
	for(i=0;i<n;i++) dp[i][0]=0;
	for(i=1;i<n;i++){
		for(j=1;j<=tar;j++){
			int nottake=dp[i-1][j];
			int take=1e9;
			if(arr[i]<=j) take=1+dp[i][j-arr[i]];
			dp[i][j]=min(take,nottake);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<tar+1;j++)
			if(dp[i][j]>=1e9) printf("I ");
			else printf("%d ",dp[i][j]);
		printf("\n");
	}
	int res=dp[n-1][tar];
	/*for(i=0;i<n;i++){
		dp[i]=calloc(tar+1,sizeof(int));
		for(j=0;j<=tar;j++)
			dp[i][j]=-1;
	}
	int res=mincoins(13,n-1,arr,dp);

}*/
