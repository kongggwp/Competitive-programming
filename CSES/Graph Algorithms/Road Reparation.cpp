#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
bool vis[100005];
int32_t main()
{
	//freopen("file.in" , "r" , stdin);freopen("file.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n , e;
	cin >> n >> e;
	vector<pii>g[n+1];
	while(e--)
	{
		int u , v , w;
		cin >> u >> v >> w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}
	priority_queue<pii , vector<pii> , greater<pii>>pq;
	pq.push({0 , 1});
	int sum = 0;
	vector<int> dist(n+1, inf);
	dist[1] = 0;
	while(!pq.empty())
	{
		int node = pq.top().second;
		pq.pop();
		if(vis[node])continue;
		vis[node] = true;
		sum+=dist[node];
		for(auto it : g[node])
		{
			int nn = it.first;
			int nw = it.second;
			if(!vis[nn] && nw < dist[nn])
			{
				dist[nn] = nw;
				pq.push({nw , nn});
			}
		}
	}
	for(int i=1 ; i<=n ; i++)
	{
		if(dist[i] == inf){cout << "IMPOSSIBLE" ; return 0;}
	}
	cout << sum;
}
