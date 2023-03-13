#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int32_t main()
{
	//freopen("file.in" , "r" , stdin);freopen("file.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n , e;
	cin >> n >> e;
	int s , f;
	cin >> s >> f;
	vector<pii>g[n];
	int sum=0;
	while(e--)
	{
		int u ,v ,w;
		cin >> u >> v >> w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
		sum+=w;
	}
	int dis1[n] , dis2[n];
	bool vis1[n] , vis2[n];
	for(int i=0 ; i<n ; i++)
	{
		dis2[i] = dis1[i] = inf;
		vis2[i] = vis1[i] = false;
	}
	priority_queue<pii , vector<pii> , greater<pii>>pq;
	dis1[s] = 0;
	pq.push({0,s}); // dis , node;
	while(!pq.empty())
	{
		int node = pq.top().second;
		pq.pop();
		if(vis1[node])continue;
		vis1[node] = true;
		for(auto it : g[node])
		{
			int nn = it.first;
			int cost = it.second;
			if(dis1[node] + cost < dis1[nn])
			{
				dis1[nn] = dis1[node] + cost;
				pq.push({dis1[nn] , nn});
			}
		}
	}

	dis2[f] = 0;
	pq.push({0,f}); // dis , node;

	while(!pq.empty())
	{
		int node = pq.top().second;
		pq.pop();
		if(vis2[node])continue;
		vis2[node] = true;
		for(auto it : g[node])
		{
			int nn = it.first;
			int cost = it.second;
			if(dis2[node] + cost < dis2[nn])
			{
				dis2[nn] = dis2[node] + cost;
				pq.push({dis2[nn] , nn});
			}
		}
	}

	int ans=0;

	for(int u=0 ; u<n ; u++)
	{
		for(auto v : g[u])
		{
			ans = max(ans , sum - dis1[u] - dis2[v.first]);
		}
	}
	cout << ans;

}
