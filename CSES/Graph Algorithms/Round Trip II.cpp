#include<bits/stdc++.h>
using namespace std;
#define int long long int
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n , m;
	cin >> n >> m;
	vector<int>g[n+1];
	int indegree[n+1]={};
	while(m--)
	{
		int u,v;
		cin >> u >> v;
		g[u].push_back(v);
		indegree[v]++;
	}
	queue<int>q;
	for(int i=1 ; i<=n ; i++)
	{
		if(!indegree[i])
		{
			q.push(i);
		}
	}
	vector<int>ans;
	while(!q.empty())
	{
		int node = q.front();
		q.pop();
		ans.push_back(node);
		for(auto it : g[node])
		{
			if(!--indegree[it])
			{
				q.push(it);
			}
		}
	}
	if(ans.size()!=n)
	{
		cout << "IMPOSSIBLE";
		return 0;
	}
	for(auto it : ans)
	{
		cout << it << ' ';
	}
}
