#include<bits/stdc++.h>
using namespace std;
int mincoins(int x,vector<int>&nums,vector<int>&dp){
    if(x<0) return 1e9;
    if(!x) return 0;
    if(dp[x]!=-1) return dp[x];
    int res=1e9;
    for(auto i:nums)
        res=min(res,1+mincoins(x-i,nums,dp));
    return dp[x]=res;
}
int main(){
    int n,x;
    cin>>n;
    cin>>x;
    vector<int>nums(n);
    vector<int>dp(x+1,1e9);
    for(int i=0;i<n;i++) cin>>nums[i];
    dp[0]=0;
    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i-nums[j]>=0)
                dp[i]=min(dp[i],1+dp[i-nums[j]]); 
        }
    }
    if(dp[x]==1e9) cout<<-1;
    else cout<<dp[x];
}