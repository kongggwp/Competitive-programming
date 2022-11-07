//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  void dfs(int row , int col  , vector<vector<int>>&vis , vector<vector<char>>&grid)
  {
      int n = grid.size();
      int m = grid[0].size();
      if(row>=0 && row<n && col>=0 && col<m && grid[row][col] == '1' && !vis[row][col])
        {
            vis[row][col] = 1;
            dfs(row+1 , col-1 , vis , grid);
            dfs(row+1 , col , vis , grid);
            dfs(row+1 , col+1 , vis , grid);
            dfs(row , col-1 , vis , grid);
            dfs(row , col+1 , vis , grid);
            dfs(row-1 , col-1 , vis , grid);
            dfs(row-1 , col , vis , grid);
            dfs(row-1 , col+1 , vis , grid);
        }
      
  }
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int c=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int row=0 ; row<n ; row++)
        {
            for(int col=0 ; col<m ; col++)
            {
                if(!vis[row][col] && grid[row][col]=='1')
                {
                    c++;
                    dfs(row,col,vis,grid);
                }
            }
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends
