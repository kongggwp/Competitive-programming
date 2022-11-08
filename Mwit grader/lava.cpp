#include <bits/stdc++.h>
using namespace std;
#define int long long int
void bfs(int row , int col , vector<vector<int>>&vis , vector<vector<char>>&grid , int t ,int n , int m)
{
	queue<pair<pair<int,int>,int>>q;
	vis[row][col] = 1;
	q.push({{row , col},0});
	int r[]={1,0,-1,0};
	int c[]={0,1,0,-1};
	while(!q.empty())
	{
		row = q.front().first.first;
		col = q.front().first.second;
		int level = q.front().second;
		if(level==t) return ;
		q.pop();
		for(int i=0 ; i<4 ; i++)
		{
			int nrow = row + r[i];
			int ncol = col + c[i];
			if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]=='.')
			{
				vis[nrow][ncol] = 1;
				q.push({{nrow , ncol},level+1});
			}
		}
	}
}
int32_t main()
{
	int n , m , a , b , t;
	cin >> n >> m >> t;
	string s[n];
	vector<vector<int>>vis(n , vector<int>(m , 0));
	vector<vector<char>>grid(n , vector<char>(m , '.'));
	vector<pair<int,int>>pos;
	for(int i=0 ; i<n ; i++)
	{
		cin >> s[i];
		for(int j=0 ; j<m ; j++)
		{
			grid[i][j] = s[i][j];
			if(grid[i][j]=='L')
			{
				pos.push_back({i,j});
			}
		}
	}
	for(int i=0 ; i<pos.size() ; i++)
	{
		if(!vis[pos[i].first][pos[i].second] && grid[pos[i].first][pos[i].second]=='L')
		{
			bfs(pos[i].first , pos[i].second, vis , grid , t , n , m);
		}
	}
		
	
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<m ; j++)
		{
			if(vis[i][j]==1)
			{
				cout << 'L';
			}
			else cout << grid[i][j];
		}
		cout << endl;
	}
	
	
}
