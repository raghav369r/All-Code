//DP34
#include<stdio.h>
#include<stdlib.h>
int main(){
	char s1[]="ab?*ab",s2[]="abxzyab";
	int l1=6,l2=7;
	int *prev=calloc(l2+1,sizeof(int));
	int *curr=calloc(l2+1,sizeof(int));
	for(int i=1;i<=l2;i++) prev[i]=0;
	prev[0]=1;
	for(int i=1;i<=l1;i++){
		int flag=1;
		for(int k=i;k>0;k--){
			if(s1[k-1]!='*'){
				flag=0;
				break;
			}
		}
		curr[0]=flag;
		for(int j=1;j<=l2;j++){
			if(s1[i-1]==s2[j-1] || s1[i-1]=='?')
				curr[j] = prev[j-1];
			else if(s1[i-1]=='*')
				curr[j] = prev[j] || curr[j-1];
			else curr[j]=0;
		}
		int *tmp=prev;
		prev=curr;
		curr=tmp;
	}
	printf("%d \n",prev[l2]);
}
