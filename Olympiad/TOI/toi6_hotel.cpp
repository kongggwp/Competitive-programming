#include<bits/stdc++.h>
using namespace std;
const int N=1e7+1;
int dp[N];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    dp[1]=500;dp[2]=800;dp[5]=1500;dp[15]=3000;
    int k[4]={1,2,5,15};
    for(int i=3 ; i<=n+15 ; i++)
    {
        int mini = INT_MAX;
        for(int j=0 ; j<4 ; j++)
            if(i>k[j])
                mini = min(mini,dp[i-k[j]]+dp[k[j]]);
            if (i != 5 && i != 15)dp[i] = mini;
    }
    int ans = INT_MAX;
    for(int i=n ;i<=n+15;i++)
        ans=min(ans , dp[i]);
    cout << ans;
}
