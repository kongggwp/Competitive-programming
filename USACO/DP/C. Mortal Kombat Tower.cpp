#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    int dp[n][2];
    for(int i=0 ; i<n ; i++)for(int j=0 ; j<2; j++)dp[i][j] = 1e9;
    if(n==1)
    {
        cout << a[0] << '\n';
        return;
    }
    dp[0][1] = a[0];
    dp[1][1] = a[0] + a[1];
    for(int i=1 ; i<n ; i++)
    {
        dp[i][0] = min(dp[i][0] , dp[i-1][1]);
        dp[i][1] = min(dp[i][1] , dp[i-1][0] + a[i]);
        if(i>=2)
        {
            dp[i][0] = min(dp[i][0] , dp[i-2][1]);
            dp[i][1] = min(dp[i][1] , dp[i-2][0] + a[i-1] + a[i]);
        }

    }
    cout << min(dp[n-1][1] , dp[n-1][0]) << '\n';
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
