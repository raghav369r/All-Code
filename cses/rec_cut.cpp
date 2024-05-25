#include<bits/stdc++.h>
using namespace std;
int mincuts(int a,int b,vector<vector<int>>&dp){
    if(a<0 || b<0) return 1e9;
    if(a==b) return 0;
    if(dp[a][b]!=-1) return dp[a][b];
    int res=1e9;
    for(int i=1;i<=a-1;i++)
        res=min(res,1+mincuts(a-i,b,dp)+mincuts(i,b,dp));
    for(int i=1;i<=b-1;i++)
        res=min(res,1+mincuts(a,b-i,dp)+mincuts(a,i,dp));
    return dp[a][b]=dp[b][a]=res;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    vector<vector<int>>dp(1+max(a,b),vector<int>(1+max(a,b),-1));
    cout<<mincuts(a,b,dp);
}