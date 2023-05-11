#include<bits/stdc++.h>
using namespace std;
int col,row;
vector<vector<char>>grid(1000,vector<char>(1000,'.'));
vector<vector<int>>vis(1000,vector<int>(1000,0));
int delx[] = {-1,0,1,0};
int dely[] = {0,1,0,-1};
int planet=0 , star=0 , comet=0;
void bfs(int i , int j)
{
    queue<pair<int,int>>q;
    vis[i][j]=1;
    q.push({i,j});
    int vertices=0;
    while(!q.empty())
    {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        int check=0;
        for(int k=0 ; k<4 ; k++)
        {
            int newr = r+delx[k];
            int newc = c+dely[k];
            if(newr>=0 && newr<row && newc>=0 && newc<col && grid[newr][newc]=='1' && !vis[newr][newc])
            {
                vis[newr][newc]=1;
                q.push({newr,newc});
                //cout << " " << newr << " " << newc;
            }
            else if(grid[newr][newc]=='0' || newr<0 || newr>=row || newc<0 || newc>=col )
            {
                check++;
            }
            //cout << "(" << newr << "," << newc << " " << check << ")" << endl;
        }
        if(check==3)vertices++;
    }
    //cout << " " << vertices <<  endl;
    if(vertices==0)planet++;
    if(vertices==4)star++;
    if(vertices==3)comet++;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> col >> row;
    string s[row];
    for(int i=0 ; i<row ; i++)
    {
        cin >> s[i];
        for(int j=0 ; j<col ; j++)
        {
            grid[i][j] = s[i][j];
        }
    }
    int c=0;
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            if(grid[i][j]=='1' && !vis[i][j])
            {
                //cout << i << " " << j ;
                bfs(i,j);
                //c++;
            }
            //cout << grid[i][j];
        }
        //cout << endl;
    }
    //cout << c;
    cout << planet << " " << star << " " << comet;
}
