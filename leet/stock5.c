#include<stdio.h>
#include<math.h>

int f(int ind,int buy,int rem,int *p,int n){
    if(ind==n || rem==0) return 0;
    if(buy) return fmax(-p[ind]+f(ind+1,0,rem,p,n),f(ind+1,1,rem,p,n));
    return fmax(p[ind]+f(ind+1,1,rem-1,p,n),f(ind+1,0,rem,p,n));
}
int maxProfit(int k, int* p, int n){
    int dp[n+1][k*2+1];
    for(int i=0;i<k*2+1;i++) dp[n][i]=0;
    for(int j=0;j<=n;j++) dp[j][2*k]=0;
    for(int i=n-1;i>=0;i--){
        for(int j=2*k-1;j>=0;j--){
            if(j%2==0)
                dp[i][j]=fmax(-p[i]+dp[i+1][j+1],dp[i+1][j]);
            else dp[i][j]=fmax(p[i]+dp[i+1][j+1],dp[i+1][j]);

        }
    }
    int i,j;
    for(i=n;i>=0;i--){
    	for(j=2*k;j>=0;j--)
    		printf("%d ",dp[i][j]);
    	printf("\n");
    }
    return dp[0][0];    
}
/*int maxProfit(int k, int* p, int n){
    return f(0,1,k,p,n);
}*/
int main(){
	int p[]={1,2,4,2,5,7,2,4,9,0};
	printf("%d",maxProfit(4,p,10));
}
