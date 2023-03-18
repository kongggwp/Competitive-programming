#include<bits/stdc++.h>
using namespace std;
#define int long long int
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
vector<int>g[100005];
int vis[100005];
int pathvis[100005];
vector<int>ans;
vector<int>path;
bool dfs(int node)
{
	vis[node] = 1;
	pathvis[node] = 1;
	ans.push_back(node);
	for(int it : g[node])
	{
		if(!vis[it])
		{
			if(dfs(it))return true;
		}
		else if(pathvis[it])
		{
			ans.push_back(it);
			return true;
		}
	}
	pathvis[node] = 0;
	ans.pop_back();
	return false;
}

int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,m;
	cin >> n >> m;
	while(m--)
	{
		int u , v ;
		cin >> u >> v;
		g[u].push_back(v);
	}
	for(int i=1 ; i<=n; i++)
	{
		if(!vis[i])
		{
			if(dfs(i))
			{
				int temp = ans.back();
				while(!ans.empty())
				{
					path.push_back(ans.back());
					ans.pop_back();
					if(ans.back()==temp)
						{
							path.push_back(temp);
							break;
						}
				}
				cout << path.size() << endl;
				reverse(path.begin() , path.end());
				for(auto it : path)
				{
					cout << it << ' ';
				}
				return 0;
			}
		}
	}
	cout << "IMPOSSIBLE";
}
