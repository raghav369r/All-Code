//DP32
#include<stdio.h>
#include<stdlib.h>
int dssq(int l1,int l2,char *s1,char *s2,int **dp){
	if(l2==0) return 1;
	if(l1==0) return 0;
	if(dp[l1][l2]!=-1) return dp[l1][l2];
	if(s1[l1-1]==s2[l2-1]) 	
		return dp[l1][l2] = dssq(l1-1,l2-1,s1,s2,dp)+dssq(l1-1,l2,s1,s2,dp);
	else return dp[l1][l2] = dssq(l1-1,l2,s1,s2,dp);
}
int main(){
	char s1[]="babgbag",s2[]="bag";
	int l1=7,l2=3;
	int **dp=malloc((l1+1)*sizeof(int*));
	for(int i=0;i<=l1;i++){
		dp[i]=malloc((l2+1)*sizeof(int));
		for(int j=0;j<=l2;j++)
			dp[i][j]=-1;
	}
	for(int i=0;i<=l1;i++) dp[i][0]=1;
	for(int i=1;i<=l2;i++) dp[0][i]=0;
	for(int i=1;i<=l1;i++){
		for(int j=1;j<=l2;j++){
			if(s1[i-1]==s2[j-1]) 
				dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
			else
				dp[i][j]=dp[i-1][j];
		}
	}
	printf("%d",dp[l1][l2]);
	//printf("%d ",dssq(l1,l2,s1,s2,dp));
}
