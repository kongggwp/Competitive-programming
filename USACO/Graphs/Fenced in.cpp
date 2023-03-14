#include<bits/stdc++.h>
using namespace std;
//#define int long long int
#define inf 1e15
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
int m,n;
const int N = 2001*2001;
int par[N];
int size[N];
struct edge
{
	int u , v , w;
};

int pos(int i,int j)
{
	return (n+1)*i+j;
}

bool cmp(edge&a1 , edge&a2)
{
	return a1.w < a2.w;
}

int findupar(int node)
{
	if(node == par[node])return node;
	return par[node] = findupar(par[node]);
}

void Union(int u , int v)
{
	int pu = findupar(u) , pv = findupar(v);
	if(size[pu] > size[pv])swap(pu , pv);	
	size[pv]+=size[pu];
	par[pu] = pv;
}

int main()
{
	freopen("fencedin.in" , "r" , stdin);freopen("fencedin.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	int a , b ;
	cin >> a >> b >> n >> m;
	int vf[n] , hf[m];
	for(int i=0 ; i<n;  i++)
	{
		cin >> vf[i];
	}
	for(int i=0 ; i<m ; i++)
	{
		cin >> hf[i];
	}
	sort(vf , vf+n);
	sort(hf , hf+m);
	int dv[n+1] , dh[m+1];
	dv[0] = vf[0];
	for(int i=1 ; i<n ; i++)
	{
		dv[i] = vf[i] - vf[i-1];
	}
	dv[n] = a-vf[n-1];
	dh[0] = hf[0];
	for(int i=1 ; i<m ; i++)
	{
		dh[i] = hf[i] - hf[i-1];
	}
	dh[m] = b-hf[m-1];
	vector<edge> edges;
	for(int i=0 ; i<=m ; i++)
	{
		for(int j=0 ; j<=n ; j++)
		{
			if(j<n)
			edges.push_back({pos(i,j) , pos(i,j+1) , dh[i]});
			if(i<m)
			edges.push_back({pos(i,j) , pos(i+1,j) , dv[j]});
		}
	}

	sort(edges.begin() , edges.end() , cmp);
	for(int i=0 ; i<(m+1)*(n+1) ; i++)
	{
		par[i] = i;
		size[i] = 1;
	}
	long long  sum=0;
	for(auto it : edges)
	{
		int u = it.u;
		int v = it.v;
		int w = it.w;
		if(findupar(u)!=findupar(v))
		{
			Union(u,v);
			sum+=w;
		}
	}
	cout << sum;

}
