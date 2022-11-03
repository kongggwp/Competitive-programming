#include <bits/stdc++.h>
vector<long long>dp(100000,-1);
long long int countDistinctWays(int n) {

    dp[0] = dp[1]=1;
    dp[2]=2;
   for(int i=3 ;i <=n ; i++)
   {
       dp[i] = (dp[i-1]%1000000007 + dp[i-2]%1000000007)%1000000007;
   }
    return dp[n];
}
