#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
using piii = pair<int,pii>;
int n , m;
char grid[2005][2005];
int dist[2005][2005];
int vis[2005][2005];
int dx[4] = {1,0,-1,0} , dy[4] = {0,1,0,-1};
queue<piii>q;
void bfs()
{
	while(!q.empty())
	{
		int r = q.front().second.first;
		int c = q.front().second.second;
		int t = q.front().first;
		q.pop();
		for(int k=0 ; k<4 ; k++)
		{
			int nr = r + dx[k];
			int nc = c + dy[k];
			//cout << nr << ' ' << nc << endl;
			if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && grid[nr][nc]!='W')
			{
				q.push({t+1,{nr,nc}});
				vis[nr][nc]=1;
				dist[nr][nc] = min(dist[nr][nc] , t+1);
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n >> m;
	vector<pii>f;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<m ; j++)
		{
			dist[i][j] = 1e9;
		}
	}
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<m ; j++)
		{
			cin >> grid[i][j];
			if(grid[i][j]=='X')
			{
				q.push({0,{i,j}});
				vis[i][j]=1;
			}
			if(grid[i][j]=='A')
			{
				f.push_back({i,j});
			}
		}
	}
		bfs();
	int cnt=0 , path=0;
	for(auto it : f)
	{
		if(dist[it.first][it.second]==1e9)
		{
		}
		else
		{
			cnt++;
			path += dist[it.first][it.second]*2;
		}
	}
	cout << cnt << ' ' << path;
}

/*เขียนเเบบไม่มึน
#include<bits/stdc++.h>
using namespace std;
int n , m , vis[2005][2005] , cnt , all;
int dx[]{1,0,-1,0} , dy[]{0,1,0,-1};
char grid[2005][2005];
int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n >> m;
	queue<pair<int,pair<int,int>>>q;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0;  j<m ; j++)
		{
			cin >> grid[i][j];
			if(grid[i][j] == 'X')q.push({0 , {i , j}}) , vis[i][j] = 1;
			if(grid[i][j] == 'W')vis[i][j] = 1;
		}
	}
	while(q.size())
	{
		int x = q.front().second.first , y = q.front().second.second , step = q.front().first;
		q.pop();
		for(int k=0 ; k<4 ; k++)
		{
			int xx = x + dx[k] , yy = y + dy[k];
			if(xx<0 || yy<0 || xx>=n || yy>=m)continue;
			if(vis[xx][yy])continue;
			vis[xx][yy] = 1;
			if(grid[xx][yy]=='A')all+=step+1 , cnt++;
			q.push({step+1 , {xx , yy}});
		}
	}
	cout << cnt << ' ' << all*2;
}
*/
