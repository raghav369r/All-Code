#include<bits/stdc++.h>
using namespace std;
int maxArrays(int prev,int ind,vector<int>&arr,int n,int m,vector<vector<int>>&dp){
    if(ind==n) return 1;
    if(prev && arr[ind]!=0 && abs(prev-arr[ind])>1) return 0;
    else if(arr[ind]!=0) return dp[ind][prev]=maxArrays(arr[ind],ind+1,arr,n,m,dp);
    int res=0;
    if(prev==0){
        for(int i=1;i<=m;i++)
            res+=maxArrays(i,ind+1,arr,n,m,dp);
    }
    else{
        if(prev>1) res+=maxArrays(prev-1,ind+1,arr,n,m,dp);
        res+=maxArrays(prev,ind+1,arr,n,m,dp);
        if(prev<m) res+=maxArrays(prev+1,ind+1,arr,n,m,dp);
    }
    return dp[ind][prev]=res;
} 
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    vector<vector<int>>dp(n,vector<int>(m+1,-1));
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<maxArrays(0,0,arr,n,m,dp);
}