//Dp24
#include<stdio.h>
#include<stdlib.h>
int max(int a,int b){
	if(b>a) return b;
	return a;
}
/*int rodcut(int ind,int len,int *cp){
	if(ind==0)
		return len*cp[0];
	if(dp[ind][len]!=-1) return dp[ind][len];
	int nottake=rodcut(ind-1,len,cp);
	int take=-1e9;
	if(ind+1<=len) 
		take=cp[ind]+rodcut(ind,len-ind-1,cp);
	return dp[ind][len]=max(take,nottake);
}*/
int main(){
	int cp[]={2,5,7,8,10},n=5,len=12;
	//printf("%d ",rodcut(n-1,len,cp));
	int i,j;
	int *dp=calloc(len+1,sizeof(int));
	for(i=0;i<len+1;i++)
		dp[i]=i*cp[0];
	for(i=1;i<n;i++){
		for(j=0;j<len+1;j++){
			int nottake=dp[j];
			int take=-1e9;
			if(i+1<=j) 
				take=cp[i]+dp[j-i-1];
			dp[j]=max(take,nottake);
		}
	}
	printf("%d ",dp[len]);
}   
