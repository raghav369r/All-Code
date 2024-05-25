#include<stdio.h>
#include<stdlib.h>
int max(int a,int b){
	if(a>b) return a;
	return b;
}
int maxprofit(int ind,int buy,int *p,int fee,int n){
	if(ind==n) return 0;
	if(buy){
		return max(-p[ind] + maxprofit(ind+1,0,p,fee,n) , 
				maxprofit(ind+1,1,p,fee,n));
	}
	else{
		return max(p[ind] + maxprofit(ind+1,1,p,fee,n) - fee , 
				maxprofit(ind+1,0,p,fee,n));
	}
}
int main(){
	int p[]={1,3,7,5,10,3};
	int fee=3,n=6;
	//printf("%d ",maxprofit(0,1,p,2,6));
	//int dp[n+1][2];
	//for(int i=0;i<2;i++) dp[n][i]=0;
	int currbuy,currsell,aheadbuy=0,aheadsell=0;
	for(int ind=n-1;ind>=0;ind--){
		currbuy= max(-p[ind] + aheadsell , aheadbuy);
		currsell= max(p[ind] + aheadbuy-fee,aheadsell);
		//dp[ind][1] = max(-p[ind] + dp[ind+1][0] , dp[ind+1][1]);
		//dp[ind][0] = max(p[ind] + dp[ind+1][1] - fee , dp[ind+1][0]);
		aheadsell=currsell;
		aheadbuy=currbuy;
	}
	printf("%d \n",aheadbuy);
}
