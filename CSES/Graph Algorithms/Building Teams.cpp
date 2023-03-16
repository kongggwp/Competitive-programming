#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
vector<int>g[100005];
int color[100005];

void dfs(int node , bool col)
{
	color[node] = col;
	for(auto it : g[node])
	{
		if(color[it] == -1)
		{
			dfs(it , !col);
		}
		else if(color[it] == col)
		{
			cout << "IMPOSSIBLE";
			exit(0);
		}
	}
}

int32_t main()
{
	//freopen("file.in" , "r" , stdin);freopen("file.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n , m;
	cin >> n  >> m;
	while(m--)
	{
		int u,v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	memset(color , -1 , sizeof(color));
	for(int i=1 ; i<=n ; ++i)
	{
		if(color[i]==-1)
		{
			dfs(i,0);
		}
	}
	for(int i=1 ; i<=n ; ++i)
	{
		cout << ++color[i] << ' ';
	}
}
