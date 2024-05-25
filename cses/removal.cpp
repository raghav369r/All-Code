#include<bits/stdc++.h>
using namespace std;
long long maxScore(int turn,int s,int e,vector<int>&nums,
    vector<vector<vector<long long>>>&dp){
    if(e<s) return 0;
    if(e==s){
        if(turn) return 0;
        else return nums[s];
    }
    if(dp[turn][s][e]!=-1) return dp[turn][s][e];
    if(!turn) 
        return dp[turn][s][e]= max(nums[s]+maxScore(1,s+1,e,nums,dp),
            nums[e]+maxScore(1,s,e-1,nums,dp));
    return dp[turn][s][e]=min(maxScore(0,s+1,e,nums,dp),maxScore(0,s,e-1,nums,dp));
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    vector<vector<vector<long long>>>dp(2,vector<vector<long long>>(n,vector<long long>(n,-1)));
    for(int i=0;i<n;i++) cin>>nums[i];
    cout<<maxScore(0,0,n-1,nums,dp);
}