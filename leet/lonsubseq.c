//DP26
#include<stdio.h>
#include<stdlib.h>
int max(int a,int b){
	if(a>b) return a;
	return b;
}
/*int lsubseq(char *s1,char *s2,int l1,int l2){
	if(l1==-1||l2==-1) return 0;
	if(dp[l1][l2]!=-1) return dp[l1][l2];
	if(s1[l1]==s2[l2]) return 1+lsubseq(s1,s2,l1-1,l2-1); 
	return dp[l1][l2]=max(lsubseq(s1,s2,l1-1,l2),lsubseq(s1,s2,l1,l2-1));
}*/
int main(){
	char s1[]="abcd",s2[]="cxxd";
	int l1=4,l2=4;
	//printf("%d ",lsubseq(s1,s2,l1-1,l2-1,dp));
	//int *prev=calloc(l2+1,sizeof(int));
	//int *curr=calloc(l2+1,sizeof(int));
	//prev[0]=0;
	int **dp=calloc(l1+1,sizeof(int*));
	for(int i=0;i<l1+1;i++)
		dp[i]=calloc(l2+1,sizeof(int));
	for(int i=0;i<l1+1;i++) dp[i][0]=0;
	for(int i=0;i<l2+1;i++) dp[0][i]=0;//prev[i]=0;
	for(int i=1;i<l1+1;i++){
		for(int j=1;j<l2+1;j++){
			if(s1[i-1]==s2[j-1])
				dp[i][j]=1+dp[i-1][j-1];
				//curr[j]=1+prev[j-1];
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				//curr[j]=max(prev[j],curr[j-1]);
		}
	//	int *tmp=prev;
	//	prev=curr;
	//	curr=tmp;
	}
	int l=dp[l1][l2]+1;
	int i=l1,j=l2;
	char res[l];
	res[--l]='\0';
	while(i!=0 && j!=0){
		if(s1[i-1]==s2[j-1]){
			res[--l]=s1[i-1];
			i--,j--;
		}
		else{
			if(dp[i-1][j]>dp[i][j-1])
				i--;
			else j--;
		}
	}
	puts(res);
	//printf("%d ",prev[l2]);
}
