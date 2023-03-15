#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
int vis[10005];
int32_t main()
{
	//freopen("file.in" , "r" , stdin);freopen("file.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,m;
	cin >> n >> m;
	int s , f , b;
	cin >> s >> f >> b;
	vector<pii>g[n];
	while(m--)
	{
		int u , v , w;
		cin >> u >> v >> w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}
	int dist1[n] , dist2[n];
	for(int i=0 ; i<n ; i++)dist1[i] = dist2[i] = inf;
	priority_queue<pii , vector<pii> , greater<pii>>pq;
	pq.push({0,s});// dis , node
	dist1[s] = 0;
	while(!pq.empty())
	{
		int node = pq.top().second;
		pq.pop();
		if(vis[node])continue;
		vis[node] = 1;
		for(auto it : g[node])
		{
			int nn = it.first;
			int cost = it.second;
			if(dist1[node] + cost < dist1[nn])
			{
				dist1[nn] = dist1[node] + cost;
				pq.push({dist1[nn] , nn});
			}
		}
	}
	memset(vis , 0 , sizeof(vis));
	pq.push({0,f});// dis , node
	dist2[f] = 0;
	while(!pq.empty())
	{
		int node = pq.top().second;
		pq.pop();
		if(vis[node])continue;
		vis[node] = 1;
		for(auto it : g[node])
		{
			int nn = it.first;
			int cost = it.second;
			if(dist2[node] + cost < dist2[nn])
			{
				dist2[nn] = dist2[node] + cost;
				pq.push({dist2[nn] , nn});
			}
		}
	}
	int mini = inf;
	int dist , f2;
	for(int i=0 ; i<n ; i++)
	{
		if(dist2[i]<mini && dist1[i]<=b)
		{
			mini = dist2[i];
			dist = dist1[i];
			f2 = i;
		}
	}
	cout << f2 << ' ' << dist << ' ' << mini;
}
