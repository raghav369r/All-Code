//"121391999"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int maxpalin(char *s1,char *s2,int l1,int l2,int **dp){
    if(l1<0||l2<0) return 0;
    if(dp[l1][l2]!=-1) return dp[l1][l2];
    if(s1[l1]==s2[l2]) return dp[l1][l2] = s1[l1]-48+maxpalin(s1,s2,l1-1,l2-1,dp);
    return dp[l1][l2] = fmax(maxpalin(s1,s2,l1,l2-1,dp),maxpalin(s1,s2,l1-1,l2,dp));
}
int main(){
    char s1[10000];
    scanf("%s",s1);
    //char s1[]="121391999";
    int l1=strlen(s1);
    char *s2=malloc(l1*sizeof(char));
    int **dp=malloc(l1*sizeof(int*));
    for(int i=0;i<l1;i++){
    	dp[i]=malloc(l1*sizeof(int));
    	for(int j=0;j<l1;j++)
    		dp[i][j]=-1;
    }
    for(int i=0;i<l1;i++)
        s2[l1-1-i]=s1[i];
    printf("%d ",maxpalin(s1,s2,l1-1,l1-1,dp));
}
