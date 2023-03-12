#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
#define endl '\n'
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;

int n , m , q;

int32_t main()
{
	//freopen("file.in" , "r" , stdin);freopen("file.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n >> m >> q;
	int dis[n+1][n+1];

	for(int i=1 ; i<=n;  i++)
	{
		for(int  j=1 ; j<=n ; j++)
		{
			dis[i][j] = inf;
		}
	}
	for(int i=1 ; i<=n ; i++)dis[i][i]=0;
	while(m--)
	{
		int u , v , w;
		cin >> u >> v >> w;
		dis[u][v] = min(w,dis[u][v]);
		dis[v][u] = min(w,dis[v][u]);
	}

	for(int k=1 ; k<=n ; k++)
	{
		for(int i=1 ; i<=n ; i++)
		{
			for(int j=1 ; j<=n ; j++)
			{
				dis[i][j] = min(dis[i][j] , dis[i][k] + dis[k][j]);
			}
		}
	}
	
	while(q--)
	{
		int u , v;
		cin >> u >> v;
		if(dis[u][v]==inf)cout << -1 << endl;
		else cout << dis[u][v] << endl;
	}

}
