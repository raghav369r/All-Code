//DP27
#include<stdio.h>
#include<stdlib.h>
int main(){
	char s1[]="kingkohli",s2[]="viratkohli";
	int l1=9,l2=10,i,j;
	int *dp=malloc((l2+1)*sizeof(int));
	for(i=0;i<=l2;i++) dp[i]=0;
	int max=0;
	for(i=1;i<=l1;i++){
		for(j=l2;j>0;j--){
			if(s1[i-1]==s2[j-1])
				dp[j]=1+dp[j-1];
			else dp[j]=0;
			if(dp[j]>max) max=dp[j];
		}
	}
	printf("%d ",max);
}
