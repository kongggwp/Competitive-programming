#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
const int N = 100005;
int size[N] , par[N];
int findupar(int node)
{
	if(node == par[node])return node;
	return par[node] = findupar(par[node]);
}

void Union(int u , int v)
{
	int pu = findupar(u) , pv = findupar(v);
	if(pu==pv)return;
	if(size[pu] > size[pv])swap(pu,pv);
	size[pv]+=size[pu];
	par[pu] = pv;
}

int32_t main()
{
	//freopen("file.in" , "r" , stdin);freopen("file.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n , e;
	cin >> n >> e;
	for(int i=1 ; i<=n ; i++)
	{
		par[i] = i;
		size[i] = 1;
	}
	int component = n;
	int maxsize = 0;
	while(e--)
	{
		int u,v;
		cin >> u >> v;
		if(findupar(u)!=findupar(v))
		{
			component--;
		}
		Union(u,v);
		maxsize = max(size[findupar(u)] , maxsize);
		cout << component << " " << maxsize << endl;
	}

}
