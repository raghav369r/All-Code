#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,1e9);
    dp[0]=0;
    for(int i=1;i<10 && i<=n;i++) dp[i]=1;
    for(int i=10;i<=n;i++){
        int num=i;
        while(num){
            dp[i]=min(dp[i],1+dp[i-num%10]);
            num/=10;
        }
    }
    cout<<dp[n];
    return 0;
}