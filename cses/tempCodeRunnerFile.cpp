#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,mod=1e9+7;
    cin>>n;
    vector<vector<char>>grid(n,vector<char>(n));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) cin>>grid[i][j];
    if(grid[0][0]=='*' || grid[0][0]=='*'){
        cout<<0;
        return 0;
    }
    vector<vector<int>>dp(n,vector<int>(n,0));
    dp[n-1][n-1]=1;
    for(int i=n-1;i>=0;i--){
        if(grid[i][n-1]=='.') dp[i][n-1]=dp[i+1][n-1];
        if(grid[n-1][i]=='.') dp[n-1][i]=dp[n-1][i+1];
    }  
    for(int i=n-2;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            if(grid[i][j]=='.'){
                dp[i][j]=dp[i+1][j];
                dp[i][j]%=mod;
                dp[i][j]=dp[i][j+1];
                dp[i][j]%=mod;
            }
        }
    }
    cout<<dp[0][0];
    return 0;

}