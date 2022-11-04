#include <bits/stdc++.h> 
int f(int ind , vector<int>&arr ,  vector<int>&dp )
{
    if(ind==0) return 0;
    if(dp[ind]!=-1)return dp[ind];
    int left , right = INT_MAX ;
    left = f(ind-1 , arr , dp) + abs(arr[ind] - arr[ind-1]);
    if(ind>1)
    right = f(ind-2 , arr , dp) + abs(arr[ind] - arr[ind-2]);
    return dp[ind] = min(left , right);
}
    
int frogJump(int n, vector<int> &heights)
{
    vector<int>dp(n+1 , -1);
    return f(n-1 ,  heights , dp);
}
