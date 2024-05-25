//DP34
#include<stdio.h>
#include<stdlib.h>
#define bool int
#define true 1
#define false 0
int match(char *s1,char *s2,int l1,int l2,int **dp){
	if(l1==0 && l2==0) return 1;
	if(l1==0 && l2>0){ printf("1");return 0;}
	if(l1>0 && l2==0 ){
		for(int i=l1;i>0;i--)
			if(s1[i-1] !='*'){printf("2");return 0;}
		return 1;
	}
	if(dp[l1][l2]!=-1) return dp[l1][l2];
	if(s1[l1-1]==s2[l2-1] || s1[l1-1]=='?')
		return dp[l1][l2] = match(s1,s2,l1-1,l2-1,dp);
	if(s1[l1-1]=='*'){
		//int a=match(s1,s2,l1-1,l2,dp);
		//int b=match(s1,s2,l1,l2-1,dp);
		/*for(int i=0;i<=l2;i++){
			if(match(s1,s2,l1-1,l2-i,dp))
				return dp[l1][l2] = 1;
		}*/
		return dp[l1][l2] = match(s1,s2,l1-1,l2,dp) 
				|| match(s1,s2,l1,l2-1,dp);
	}
	printf("3");
	return dp[l1][l2] = 0;
}
bool f(char *s,char *p,int l1,int l2,bool **dp){
    if(l1==0 && l2==0) return true;
    if(l1>0 && l2==0) return false;
    if(l1==0 && l2>0){
        for(int i=1;i<=l2;i++)
            if(p[i-1]!='*') return false;
        return true;
    }
    if(dp[l1][l2]!=-1) return dp[l1][l2];
    if(s[l1-1]==p[l2-1] || p[l2-1]=='?') return dp[l1][l2] = f(s,p,l1-1,l2-1,dp);
    if(p[l2-1]=='*'){
        return dp[l1][l2] = f(s,p,l1,l2-1,dp) || f(s,p,l1-1,l2,dp);
    }
    return dp[l1][l2] = false;
}
int main(){
	char s1[]="?a",s2[]="cb";
	int l1=2,l2=2;
	int **dp=calloc(l1+1,sizeof(int *));
	for(int i=0;i<l1+1;i++){
		dp[i]=calloc(l2+1,sizeof(int));
		for(int j=0;j<l2+1;j++)
			dp[i][j]=-1;
	}
	printf("%d ",f(s2,s1,l2,l1,dp));
	/*for(int i=1;i<=l2;i++) dp[0][i]=0;
	for(int i=1;i<=l1;i++){
		int flag=1;
		for(int j=i;j>0;j--){
			if(s1[j-1] !='*'){
				flag=0;
				break;
			}
		}
		dp[i][0]=flag;
	}
	dp[0][0]=1;
	for(int i=1;i<=l1;i++){
		for(int j=1;j<=l2;j++){
			if(s1[i-1]==s2[j-1] || s1[i-1]=='?')
				dp[i][j] = dp[i-1][j-1];
			else if(s1[i-1]=='*')
				dp[i][j] = dp[i-1][j] || dp[i][j-1];
			else dp[i][j]=0;
		}
	}
	printf("%d \n",dp[l1][l2]);*/
}
