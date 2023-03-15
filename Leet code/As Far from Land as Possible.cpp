class Solution {
public:
int n;
int vis[100][100];
int dr[4] = {1,0,-1,0} , dc[4] = {0,1,0,-1};
using piii=pair<int , pair<int,int>>;
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<piii>q;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                if(grid[i][j])
                {
                    q.push({0,{i,j}});
                    vis[i][j]=1;
                }
            }
        }
    int ans=0;
    while(!q.empty())
    {
        int r=q.front().second.first;
        int c=q.front().second.second;
        int t=q.front().first;
        q.pop();
        ans = max(ans , t);
        for(int i=0 ; i<4 ; i++)
        {
            int nr = r + dr[i];
            int nc = c + dc[i];
            if(nc<0 || nr<0 || nc>=n || nr>=n || vis[nr][nc] || grid[nr][nc])continue;
            {
                q.push({t+1 , {nr , nc}});
                vis[nr][nc] = 1;
            }
        }
    }
    if(!ans)return -1;
    return ans;
    }
};
