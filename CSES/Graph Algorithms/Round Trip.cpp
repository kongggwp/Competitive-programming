#include<bits/stdc++.h>
using namespace std;
#define int long long int
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
vector<int>g[100005];
vector<int>path;
vector<int>ans;
int vis[100005];
bool dfs(int node , int par)
{
	vis[node] = 1;
	path.push_back(node);
	for(auto it : g[node])
	{
		if(!vis[it])
		{
			if(dfs(it , node))return true;
		}
		else if(it != par)
		{
			path.push_back(it);
			return true;
		}
	}
	path.pop_back();
	return false;
}

int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,m;
	cin >> n >> m;
	while(m--)
	{
		int u , v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for(int i=1 ; i<=n ; i++)
	{
		if(!vis[i])
		{
			if(dfs(i , -1))
			{
				int temp = path.back();
				while(!path.empty())
				{
					ans.push_back(path.back());
					path.pop_back();
					if(ans.back()==temp && ans.size()!=1)break;
				}
				cout << ans.size() << endl;
				for(auto it : ans)
				{
					cout << it << ' ';
				}
				cout << endl;	
				//return 0;
			}
		}
	}
	cout << "IMPOSSIBLE";
}
