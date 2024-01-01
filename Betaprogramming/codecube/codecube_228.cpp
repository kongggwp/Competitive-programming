#include<bits/stdc++.h>
using namespace std;
int n , m , k , t;
vector<pair<int,int>>g[100005];
int dist[100005][2] , vis[100005][2];
int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n >> m >> k >> t;
	priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>>pq;//weight , node , use;
	while(m--)
	{
		int u , v , w;
		cin >> u >> v >> w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}
	for(int i=0 ; i<=100005 ; i++)dist[i][0] = dist[i][1] = 1e9;
	dist[1][0] = dist[1][1] = 0;
	pq.push({0 , {1 , 0}});
	while(pq.size())
	{
		int node = pq.top().second.first;
		int use  = pq.top().second.second;
		pq.pop();
		if(vis[node][use])continue;
		vis[node][use] = 1;
		for(auto it : g[node])
		{
			int nn = it.first , w = it.second;
			if(!use)//use
			{
				if(dist[node][0] + k <= dist[nn][1])
				{
					dist[nn][1] = dist[node][0] + k;
					pq.push({dist[nn][1],{nn,1}});
				}
			}
			if(dist[node][use] + w <= dist[nn][use])
			{
				dist[nn][use] = dist[node][use] + w;
				pq.push({dist[nn][use] , {nn , use}});
			}
		}
	}
	min(dist[n][0] , dist[n][1]) <=t ? cout << "Happy Winnie the Pooh :3\n" << min(dist[n][0] , dist[n][1]) : cout << "No Honey TT";
}
