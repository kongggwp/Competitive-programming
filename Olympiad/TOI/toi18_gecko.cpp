#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
#define endl '\n';
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
int n , m , k , p , u , v , w , dist[20005] , pos[20005] , vis[20005] , par[20005] , sz;
vector<pii>g[20005];
priority_queue<pii , vector<pii> , greater<pii>>pq;
vector<pii>s;
int32_t main()
{
	//freopen("file.in" , "r" , stdin);freopen("file.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n >> m >> k >> p;
	for(int i=0 ; i<k ; i++)cin >> pos[i];
	while(m--)
	{
		cin >> u >> v >> w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}
	memset(dist , 12 , sizeof(dist));
	pq.push({dist[p] = 0 , p}); //start from the end
	par[p] = -1;//p node doesn't have parrent marked as -1
	while(pq.size())
	{
		int node = pq.top().second;
		pq.pop();
		if(vis[node])continue;
		vis[node] = 1;
		if(p^node)s.push_back({node , par[node]});//except p node 
		for(auto it : g[node])
		{
			int nn = it.first , wt = it.second;
			if(dist[node] + wt < dist[nn])
			{
				pq.push({dist[nn] = dist[node] + wt , nn});
				par[nn] = node; //update parrent node
			}
		}
	}
	for(int i=0 ; i<k ; i++)cout << dist[pos[i]] << ' ';
	cout << endl;
	sz = s.size();
	cout << sz << endl;
	for(auto i = sz-1 ; i>=0 ; --i)
		cout << min(s[i].first , s[i].second) << ' ' << max(s[i].first , s[i].second) << endl;
}
