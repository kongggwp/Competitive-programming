#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int par[200005] , size[200005];
int findupar(int node)
{
	if(node == par[node])return node;
	return par[node] = findupar(par[node]);
}
void Union(int u , int v)
{
	int pu = findupar(u) , pv = findupar(v);
	if(size[pu]>size[pv])swap(pu,pv);
	size[pv]+=size[pu];
	par[pu] = pv;
}

int32_t main()
{
	freopen("closing.in" , "r" , stdin);freopen("closing.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n , e ;
	cin >> n >> e;
	for(int i=1 ; i<=n ; i++)
	{
		par[i] = i;
		size[i] = 1;
	}
	vector<int>g[n+1];
	while(e--)
	{
		int u , v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	int close[n+1];
	for(int i=1 ; i<=n ; i++)
	{
		cin >> close[i];
	}
	reverse(close+1 , close+n+1);
	vector<string>ans = {"YES"};
	int check[n+1];
	memset(check , 0 , sizeof(check));
	check[close[1]]=1;
	int component = 1;
	for(int i=2 ; i<=n ; i++)
	{
		component++;
		check[close[i]]=1;
		for(auto v : g[close[i]])
		{
			if(check[v]==1 && findupar(close[i])!=findupar(v))
			{
				Union(close[i] , v);
				component--;
			}
		}
		if(component==1)ans.push_back("YES");
		else ans.push_back("NO");
	}
	reverse(ans.begin() , ans.end());
	for(auto s : ans)
		cout << s << endl;
}