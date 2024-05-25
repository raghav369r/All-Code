#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int ways(int n,vector<int>&dp){
    if(n<0) return 0;
    if(!n) return 1;
    if(dp[n]!=-1) return dp[n];
    int res=0;
    for(int i=1;i<7;i++){
        res+=ways(n-i,dp);
        res%=mod;
    }
    return dp[n]=res;
}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<7;j++)
            if(i-j>=0) dp[i]+=dp[i-j];
    }
    cout<<dp[n];
}