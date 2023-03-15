#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
int n;
int vis[205];
vector<int>con[205];
struct coor
{
	int x , y , p;
};

int dfs(int node)
{	
	vis[node] = 1;
	int count = 1;
	for(auto it : con[node])
	{
		if(!vis[it])
		{
			count += dfs(it);
		}
	}
return count;
}

int32_t main()
{
	freopen("moocast.in" , "r" , stdin);freopen("moocast.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n;
	vector<coor>g;
	for(int i=0 ; i<n ; i++)
	{
		int x , y , p;
		cin >> x >> y >> p;
		g.push_back({x,y,p});
	}
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			int dis = pow((g[i].x - g[j].x),2) + pow((g[i].y - g[j].y),2);
			if(dis <= pow(g[i].p,2))con[i].push_back(j);
		}
	}
	int ans=1;
	for(int i=0 ; i<n ; i++)
	{
			ans = max(ans , dfs(i));
			memset(vis , 0 , sizeof(vis));
	}
	cout << ans;
}
