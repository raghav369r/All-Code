#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int maxprofit(int* p, int n){
    int dp[n+2][2];
    dp[n][1]=dp[n][0]=0;
    dp[n+1][1]=dp[n+1][0]=0;
    for(int i=n-1;i>=0;i--){
    	dp[i][0]=fmax(dp[i+1][0],p[i]+dp[i+2][1]);
    	dp[i][1]=fmax(-p[i]+dp[i+1][0],dp[i+1][1]);
    }
    return dp[0][1];
}
int maxProfit(int* p, int n){
    int *p1=malloc(2*sizeof(int));
    int *p2=malloc(2*sizeof(int));
    int *curr=malloc(2*sizeof(int));
    p1[0]=p1[1]=p2[1]=p2[0]=0;
    for(int i=n-1;i<=0;i--){
        curr[1]=fmax(-p[i]+p2[0],p2[1]);
        curr[0]=fmax(p[i]+p1[1],p2[0]);
        int *tmp=curr;
        curr=p1;
        p1=p2;
        p2=tmp;
    }
    return p2[1];
}
int main(){
	int arr[]={1,2,3,0,2};
	int n=5;
	printf("%d ",maxProfit(arr,n));
}

