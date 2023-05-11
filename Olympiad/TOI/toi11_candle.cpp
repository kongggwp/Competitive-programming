#include <bits/stdc++.h>
using namespace std;
void bfs(int row , int col , vector<vector<int>>&vis , vector<vector<char>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = 1;
        queue<pair<int,int>> q;
        q.push({row,col});
        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int drow = -1 ; drow<=1 ; drow++)
            {
                for(int dcol = -1 ; dcol<=1 ; dcol++)
                {
                    int nrow = row + drow;
                    int ncol = col + dcol;
                    if(nrow >=0 && nrow < n && ncol>=0 && ncol < m
                    && grid[nrow][ncol] == '1' && !vis[nrow][ncol])
                    {
                        vis[nrow][ncol] = 1;
                        q.push({nrow,ncol});
                    }
                }
            }
        }
    }
int main()
{
    int n , m , cnt=0;
    cin >> n >> m;
  vector<vector<char>>grid(n,vector<char>(m,'0'));
  vector<vector<int>> vis(n , vector<int>(m,0));
  for(int i=0 ; i<n ; i++)
    {
      for(int j=0 ; j<m ; j++)
        {
          cin >> grid[i][j];
        }
    }
  for(int row = 0 ; row < n ; row++)
        {
            for(int col = 0 ; col < m ; col ++ )
            {
                if(!vis[row][col]  && grid[row][col] == '1')
                {
                    cnt++;
                    bfs(row,col,vis,grid);
                }
            }
        }
  cout << cnt;
}
