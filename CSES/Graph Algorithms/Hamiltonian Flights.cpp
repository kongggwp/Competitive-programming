#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int dp[1<<20][21];
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int>g[n+1];
    while(m--)
    {
        int u, v;
        cin >> u >> v;
        u--;v--;
        g[u].push_back(v);
    }
    dp[1][0] = 1;
    for(int mask=0; mask < 1<<n ; mask++)
    {
        for(int u=0 ; u<n ; u++)
        {
            if(!((1<<u)&mask))continue;
            if(!(mask&1))continue;
            for(auto it : g[u])
            {
                if(((1<<it)&mask))continue;
                dp[mask|(1<<it)][it] += dp[mask][u];
                dp[mask|(1<<it)][it] %= mod;
            }
        }
    }
    cout << dp[(1<<n)-1][n-1];
}
