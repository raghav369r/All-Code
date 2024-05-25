//DP33
#include<stdio.h>
#include<stdlib.h>
int min(int a,int b){
	if(a<b) return a;
	return b;
}
int editdis(int l1,int l2,char *s1,char *s2,int **dp){
	if(l2==0) return l1;
	if(l1==0) return l2;
	if(dp[l1][l2]!=-1) return dp[l1][l2];
	if(s1[l1-1]==s2[l2-1]) return dp[l1][l2] = editdis(l1-1,l2-1,s1,s2,dp);
	int insert = 1 + editdis(l1,l2-1,s1,s2,dp);
	int delete = 1 + editdis(l1-1,l2,s1,s2,dp);
	int replace= 1 + editdis(l1-1,l2-1,s1,s2,dp);
	return dp[l1][l2] = min(insert,min(delete,replace));
}
int main(){
	char s1[]="horse",s2[]="ros";
	int l1=5,l2=3,i,j;
	int **dp=calloc(l1+1,sizeof(int*));
	for(i=0;i<=l1;i++){
		dp[i]=calloc(l2+1,sizeof(int));
		for(j=0;j<=l2;j++)
			dp[i][j]=-1;
	}
	for(i=0;i<l1+1;i++) dp[i][0]=i;
	for(j=0;j<l2+1;j++) dp[0][j]=j;
	for(i=1;i<=l1;i++){
		for(j=1;j<=l2;j++){
			if(s1[i-1]==s2[j-1])
				dp[i][j]=dp[i-1][j-1];
			else{
				int insert = 1 + dp[i][j-1];
				int delete = 1 + dp[i-1][j];
				int replace= 1 + dp[i-1][j-1];
				dp[i][j] = min(insert,min(delete,replace));
			}
		}
	}
	printf("%d",dp[l1][l2]);
	//printf("%d ",editdis(l1,l2,s1,s2,dp));
}
