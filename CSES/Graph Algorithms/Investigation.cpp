#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
int path[100005];
int mxf[100005];
int mnf[100005];
int32_t main()
{
	//freopen("file.in" , "r" , stdin);freopen("file.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n , e ;
	cin >> n >> e;
	vector<pii>g[n+1];
	while(e--)
	{
		int u , v , w;
		cin >> u >> v >> w;
		g[u].push_back({v,w});
		//g[v].push_back({u,w});
	}
	int dis[n+1];
	bool vis[n+1];
	for(int i=1 ; i<=n ; i++)dis[i]=inf , vis[i] = false;

	priority_queue<pii , vector<pii> , greater<pii>>pq;
	pq.push({0 , 1}); // dis , node
	dis[1] = 0;
	path[1] = 1;
	while(!pq.empty())
	{
		int node = pq.top().second;
		pq.pop();
		if(vis[node])continue;
		vis[node] = true;
		path[1] = 1;
		for(auto it : g[node])
		{
			int nn = it.first;
			int cost= it.second;

			if(dis[node] + cost < dis[nn])
			{
				dis[nn] = dis[node] + cost;
				path[nn] = path[node];
				mxf[nn] = mxf[node] + 1;
				mnf[nn] = mnf[node] + 1;
				pq.push({dis[nn] , nn});
			}
			else if(dis[node] + cost == dis[nn])
			{
				path[nn] += path[node];
				path[nn]%=mod;
				mxf[nn] = max(mxf[nn] , mxf[node] + 1);
				mnf[nn] = min(mnf[nn] , mnf[node] + 1);
			}
		}
	}
	cout << dis[n] << ' ' << path[n] << ' ' << mnf[n] << ' ' << mxf[n] ;
}
