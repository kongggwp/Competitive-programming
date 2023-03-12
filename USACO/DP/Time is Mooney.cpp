#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("time.in" , "r" , stdin);
    freopen("time.out" , "w" , stdout);
    int N,E,c;
    cin >> N >> E >> c;
    int cost[N+1];
    vector<int>G[N+1];
    for(int i=1 ; i<=N ; i++)
    {
        cin >> cost[i];
    }
    while(E--)
    {
        int u , v;
        cin >> u >> v;
        G[v].push_back(u);
    }
    int dp[1005][N+1];
    memset(dp , -1 , sizeof(dp));
    dp[0][1] = cost[1];
    for(int day=1 ; day<=1000 ; day++)
    {
        for(int v = 1 ; v<=N ; v++)
        {
            for(auto u : G[v])
            if(dp[day-1][u]!=-1)
            dp[day][v] = max(dp[day][v] , dp[day-1][u] + cost[v]);
        }
    }
    int ans=0;
    for(int i=0 ; i<=1000 ; i++)
    {
        ans = max(ans , dp[i][1]-c*i*i);
    }
    cout << ans;
}
