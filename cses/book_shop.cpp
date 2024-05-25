#include<bits/stdc++.h>
using namespace std;
int maxpages(int x,int i,vector<int>&price,vector<int>&pages,vector<vector<int>>&dp,int n){
    if(i==n || x<=0) return 0;
    if(dp[x][i]!=-1) return dp[x][i];
    int res=maxpages(x,i+1,price,pages,dp,n);
    if(price[i]<=x) res=max(res,pages[i]+maxpages(x-price[i],i+1,price,pages,dp,n));
    return dp[x][i]=res;
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>price(n);
    vector<int>pages(n);
    for(int i=0;i<n;i++) cin>>price[i];
    for(int i=0;i<n;i++) cin>>pages[i];
    vector<vector<int>>dp(x+1,vector<int>(n,-1));
    cout<< maxpages(x,0,price,pages,dp,n);
    return 0;
}
