#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
char grid[1005][1005];
int dx[4] = {1,0,-1,0} , dy[4] = {0,1,0,-1};
int vis1[1005][1005] , vis2[1005][1005];
int n , m ;
int wall=0;
void flood()
{
	queue<pii>q;
	for(int i=0 ; i<n ; i++)
	{
		if(grid[i][0]!='X')
		{
			q.push({i,0});
			vis1[i][0]=1;
		}
		if(grid[0][i]!='X')
		{
			q.push({0,i});
			vis1[0][i]=1;
		}
	}
	while(!q.empty())
	{
		int r = q.front().first;
		int c = q.front().second;
		q.pop();
		for(int k=0 ; k<4 ; k++)
		{
			int nr = r + dx[k];
			int nc = c + dy[k];
			if(nr>=0 && nr<n && nc>=0 && nc<m && !vis1[nr][nc] && grid[nr][nc]!='X')
			{
				q.push({nr,nc});
				vis1[nr][nc]=1;
			}
		}
	}
}	
void bfs(int i , int j)
{
	queue<pii>q;
	q.push({i,j});
	vis2[i][j]=1;
	while(!q.empty())
	{
		int r = q.front().first;
		int c = q.front().second;
		q.pop();
		for(int k=0 ; k<4 ; k++)
		{
			int nr = r + dx[k];
			int nc = c + dy[k];
			if(nr>=0 && nr<n && nc>=0 && nc<m && !vis2[nr][nc] && grid[nr][nc]=='X')
			{
				q.push({nr,nc});
				vis2[nr][nc]=1;
			}
			else if(vis1[nr][nc])
			{
				wall++;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n >> m;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<m ; j++)
		{
			cin >> grid[i][j];
		}
	}
	flood();
	int ans=0;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<m ; j++)
		{
			if(grid[i][j]=='X' && !vis2[i][j])
			{
				wall=0;
				bfs(i,j);
				ans = max(ans , wall);
			}
		}
	}
	cout << ans;
}
