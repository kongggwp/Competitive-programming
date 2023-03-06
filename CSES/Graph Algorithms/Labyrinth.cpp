#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
int dx[]{0,1,0,-1} , dy[]{1,0,-1,0};
char s[1005][1005];
bool vis[1005][1005];
int main()
{
    int n,m;
    cin >> n >> m;
    queue<pii>q;
    int sx , sy , fx , fy;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            cin >> s[i][j];
            if(s[i][j]=='A')q.push({i,j}) , vis[i][j] = true , sx = i , sy = j;
            if(s[i][j]=='B')fx = i , fy=j;
        }
    }
    int from[n][m]={};//from 1=up 2=right 3=down 4=left
    while(!q.empty())
    {
        int r = q.front().first;ss
        int c = q.front().second;
        q.pop();
        if(s[r][c]=='B')break;
        for(int i=0 ; i<4 ; i++)
        {
             int nr = r + dy[i];
             int nc = c + dx[i];
             if(nr>=0 && nr<n && nc>=0 && nc<m && s[nr][nc] != '#' && !vis[nr][nc])
             {
                 q.push({nr,nc});
                 vis[nr][nc] = true;
                 if(i==0)from[nr][nc] = 3;
                 if(i==1)from[nr][nc] = 4;
                 if(i==2)from[nr][nc] = 1;
                 if(i==3)from[nr][nc] = 2;
             }
        }
    }
    if(from[fx][fy]==0)
    {
        cout << "NO";
        return 0;
    }
    string ans="";
    int cnt=0;
    while(fx!=sx || fy!=sy)
    {
        if(from[fx][fy]==1)
        {
            ans +='U';
            fx++;
        }
        else if(from[fx][fy]==2)
        {
            ans +='L';
            fy++;
        }
        else if(from[fx][fy]==3)
        {
            ans +='D';
            fx--;
        }
        else if(from[fx][fy]==4)
        {
            ans +='R';
            fy--;
        }
        cnt++;
    }
      reverse(ans.begin() , ans.end());
      cout << "YES" << endl;
      cout << cnt << endl;
      cout << ans;
}
