#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
int n,m;
vector<int>g1[100005];
vector<int>g2[100005];
bitset<100005>vis;
int dfs(int node ,  vector<int>*g)
{
	vis[node] = 1;
	int component = 1;
	for(auto it : g[node])
	{
		if(!vis[it])
		{
			dfs(it , g);
		}
	}
	return component;
}
int32_t main()
{
	//freopen("file.in" , "r" , stdin);freopen("file.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n >> m;
	while(m--)
	{
		int u , v;
		cin >> u >> v;
		g1[u].push_back(v);
		g2[v].push_back(u);
	}
	int c=0;
	dfs(1 , g1);
	for(int i=1 ; i<=n ; i++)
	{
		if(!vis[i])
		{
			cout << "NO" << endl;
			cout << 1 << ' ' << i;
			return 0;
		}
	}
	vis.reset();
	dfs(1 , g2);
	for(int i=1 ; i<=n ; i++)
	{
		if(!vis[i])
		{
			cout << "NO"<< endl;
			cout << i << ' ' << 1;
			return 0;
		}
	}
	cout << "YES";
}
