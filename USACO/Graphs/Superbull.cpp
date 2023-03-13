#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
const int N=2005;
int par[N];
int size[N];
struct edge
{
	int u , v , w;
};

bool cmp(edge&a1 , edge&a2)
{
	return a1.w > a2.w;
}

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
	freopen("superbull.in" , "r" , stdin);freopen("superbull.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	for(int i=0 ; i<=N ; i++)
	{
		par[i] = i;
		size[i] = 1;
	}
	for(int i=0 ; i<n ; i++)
	{
		cin >> a[i]; 
	}
	vector<edge> edges;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=i+1 ; j<n ; j++)
		{
			edges.push_back({i, j , a[i] ^ a[j]});
		}
	}
	sort(edges.begin() , edges.end() , cmp);
	int sum=0;
	for(auto it : edges)
	{
		if(findupar(it.u)!=findupar(it.v))
		{
			Union(it.u , it.v);
			sum += it.w;
		}
	}
	cout << sum;
}
