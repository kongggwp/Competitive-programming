#include<bits/stdc++.h>
using namespace std;
int inf = 1448498774;
int dp[2005][2005];
int vis[2005][2005];
using pii = pair<int,int>;
using piii = pair<int,pii>;
vector<pii>g[2005];
int32_t main()
{
    int n , p , u , e;
    scanf("%d%d%d%d", &n, &p, &u, &e);
    while(e--)
    {
        int u , v , w;
        scanf("%d%d%d", &u, &v, &w);
        g[u].emplace_back(v,w);
    }
    priority_queue<piii,vector<piii>,greater<piii>>q;
    memset(dp, 86, sizeof(dp));
    q.push({0,{p,0}}); //dist , node , edges
    dp[p][0] = 0;
    while(!q.empty())
    {
        int node = q.top().second.first;
        int edges = q.top().second.second;
        q.pop();
        if(dp[node][edges]==inf || edges==n-1 || edges==e)continue;
        if(vis[node][edges])continue;
        vis[node][edges] = 1;
        for(auto it : g[node])
        {
            int nn = it.first;
            int w = it.second;
            if(dp[node][edges] + w < dp[nn][edges+1] && !vis[it.first][edges] && it.first!=p)
            {
                dp[nn][edges+1] = dp[node][edges] + w;
                q.push({dp[nn][edges+1] , {nn , edges+1}});
            }
        }
    }
    int t; scanf("%d", &t);
    while(t--)
    {
        int h; scanf("%d", &h);
        int ans=inf;
        for(int i=0 ; i<n ; i++)
        {
            if(dp[u][i]!=inf)
            ans = min(ans , dp[u][i]+h*(i-1));
        }
        cout << ans << ' ';
    }
}
