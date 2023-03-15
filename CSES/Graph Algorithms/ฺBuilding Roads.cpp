#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
const int N=1e5+1;
int vis[N];
vector<int>g[N];

void dfs(int node)
{
	vis[node]=1;
	for(auto it : g[node])
	{
		if(!vis[it])
		{
			dfs(it);
		}
	}
}

int32_t main()
{
	//freopen("file.in" , "r" , stdin);freopen("file.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,e;
	cin >> n >> e;
	while(e--)
	{
		int u,v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	int component=1;
	vector<pii>road;
	dfs(1);
	for(int i=2 ; i<=n ; i++)
	{
		if(!vis[i])
		{
			dfs(i);
			component++;
			road.push_back({1,i});
		}
	}
	cout << component-1 << endl;
	for(auto it : road)
	{
		cout << it.first << ' ' << it.second << endl;
	}
}
