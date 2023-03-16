#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e18
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
int vis[10005][10];
int32_t main()
{
	//freopen("file.in" , "r" , stdin);freopen("file.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,m,t;
	cin >> n >> m >> t;
	int s , f;
	cin >> s>> f;
	vector<pii>g[n+1];
	while(m--)
	{
		int u , v , w;
		cin >> u >> v >> w;
		g[u].push_back({v,w});
	}
	priority_queue<piii , vector<piii> , greater<piii>>pq;
	int dist[n+1][t];
	for(int i=1 ; i<=n ; i++)for(int j=0 ; j<t ; j++)dist[i][j] = inf;
	dist[s][0] = 0;
	pq.push({0,{s , 0}});
	while(!pq.empty())
	{
		int node = pq.top().second.first;
		int step = pq.top().second.second%t;
		pq.pop();
		if(vis[node][step%t])continue;
		vis[node][step%t]=1;
		for(auto it : g[node])
		{
			int nn = it.first;
			int w = it.second;
			if(dist[node][step%t] + w < dist[nn][(step+1)%t])
			{
				dist[nn][(step+1)%t] = dist[node][step%t] + w;
				pq.push({dist[nn][(step+1)%t] , {nn , (step+1)%t}});
			}
		}
	}
	if(dist[f][t-1]==inf)cout << -1;
	else cout << dist[f][t-1];
}
