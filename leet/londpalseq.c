#include<stdio.h>
#include<stdlib.h>
int max(int a,int b){
	if(a>b) return a;
	return b;
}
int lcsq(char *s1,char *s2,int l1,int l2){
	int *prev=malloc((l2+1)*sizeof(int));
	int *curr=malloc((l2+1)*sizeof(int));
	int i,j;
	for(i=0;i<l2+1;i++) prev[i]=0;
	for(i=1;i<=l1;i++){
		for(j=0;j<=l2;j++){
			if(s1[i-1]==s2[j-1])
				curr[j]=1+prev[j-1];
			else curr[j]=max(curr[j-1],prev[j]);
		}
		int *tmp=prev;
		prev=curr;
		curr=tmp;
	}
	return prev[l2]; 
}
int main(){
	char s1[]="kingkohli";
	int l1=9;
	char s2[l1+1];
	s2[l1]='\0';
	for(int i=0;i<l1;i++)
		s2[l1-i-1]=s1[i];
	printf("%d",lcsq(s1,s2,l1,l1));
}
