#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
char grid[1000][1000];
int vis[1000][1000];
int m,n;
void dfs(int i , int j)
{
	if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || grid[i][j]=='#')return;
	vis[i][j]=1;
	dfs(i+1,j);
	dfs(i,j+1);
	dfs(i-1,j);
	dfs(i,j-1);
}

int32_t main()
{
	//freopen("file.in" , "r" , stdin);freopen("file.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n >> m;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<m ; j++)
		{
			cin >> grid[i][j];
		}
	}
	int room=0;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<m ; j++)
		{
			if(!vis[i][j] && grid[i][j] == '.')
			{
				dfs(i,j);
				room++;
			}
		}
	}
	cout << room;
		
}
