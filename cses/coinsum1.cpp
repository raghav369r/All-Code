#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int main(){
    int n,x;
    cin>>n;
    cin>>x;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    //sort(nums.begin(),nums.end());
    vector<int>dp(x+1,0);
    dp[0]=1;
    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i>=nums[j]){
                dp[i]+=dp[i-nums[j]];
                dp[i]%=mod;
            }
        }
    }
    cout<<dp[x];
}   
