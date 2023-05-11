#include<bits/stdc++.h>
using namespace std;
const int N = 2001;
const int M = 10001;
int row, col;
bitset<M*N> grid;
bitset<M*N> vis;
int planet=0 , star=0 , comet=0;
int delx[] = {-1,0,1,0};
int dely[] = {0,1,0,-1};
void bfs(int i, int j) {
    queue<pair<int,int>> q;
    vis.set(i * col + j);
    q.push({i,j});
    int vertices = 0;
    while(!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        int check = 0;
        for(int k=0 ; k<4 ; k++) {
            int newr = r + delx[k];
            int newc = c + dely[k];
            if(newr>=0 && newr<row && newc>=0 && newc<col && grid.test(newr * col + newc) && !vis.test(newr * col + newc)) {
                vis.set(newr * col + newc);
                q.push({newr,newc});
            }
            else if(!grid.test(newr * col + newc) || newr<0 || newr>=row || newc<0 || newc>=col ) {
                check++;
            }
        }
        if(check==3) vertices++;
    }
    if(vertices==0) planet++;
    if(vertices==4) star++;
    if(vertices==3) comet++;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> col>>row;
    for(int i=0 ; i<row ; i++) {
        string s; cin>>s;
        for(int j=0 ; j<col ; j++) {
            grid.set(i * col + j, s[j] - '0');
        }
    }
    for(int i=0 ; i<row ; i++) {
        for(int j=0 ; j<col ; j++) {
            if(grid.test(i * col + j) && !vis.test(i * col + j)) {
                bfs(i,j);
            }
        }
    }
    cout << planet << " " << star << " " << comet;
}
