#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int main(){
    int n;
    cin>>n;
    int sum=(n*(n+1))/4;
    //cout<<sum;
    vector<int>dp(sum+1,0);
    dp[0]=1;
    for(int i=1;i<=sum;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                dp[i]+=dp[i-j];
                dp[i]%=mod;
            }
        }
    }
    cout<<dp[sum];
}