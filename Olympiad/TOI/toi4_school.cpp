#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
int mod = 1e9+7;
int n , m , dp[65][65] , vis[65][65] , currentpool , dx[4]={1,0,-1,0} , dy[4]={0,1,0,-1} , mx , minpool=2048;
set<int>alreadyvispool;vector<pii>posmax;char a[65][65];
void dfs(int i , int j)
{
	vis[i][j] = currentpool;
	for(int k=0 ; k<4 ; k++)
	{
		int ni = i+dx[k] , nj = j+dy[k];
		if(vis[ni][nj] || ni<1 || ni>n || nj<1 || nj>m || a[ni][nj]!='P')continue;
		dfs(ni,nj);
	}
}
int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> m >> n;
	for(int i=1 ; i<=n ; i++)for(int j=1 ; j<=m ; j++)cin >> a[i][j];
	for(int i=1 ; i<=n ; i++)for(int j=1 ; j<=m ; j++){if(vis[i][j] || a[i][j]!='P')continue; currentpool++ ; dfs(i , j);}
	for(int i=1 ; i<=n ; i++)for(int j=1 ; j<=m ; j++)if(a[i][j]!='T')dp[i][j] = min({dp[i-1][j] , dp[i][j-1] , dp[i-1][j-1]})+1 , mx = max(mx , dp[i][j]);
	for(int i=1 ; i<=n ; i++)for(int j=1 ; j<=m ; j++)if(dp[i][j]==mx)posmax.push_back({i,j});
	for(pii it : posmax)
	{
		int x = it.first  , y = it.second; 
		for(int i=x ; i>x-mx ; i--)for(int j=y ; j>y-mx ; j--)if(vis[i][j])alreadyvispool.insert(vis[i][j]);
		minpool = min(minpool , int(alreadyvispool.size()));
		alreadyvispool.clear();
	}
	cout << mx*mx << ' ' << minpool;
}
