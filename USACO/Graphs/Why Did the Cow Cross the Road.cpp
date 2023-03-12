#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
using pii = pair<int,int>;
int dx[] = {1, 0, -1, 0, 3, 0, -3, 0, 2, 2, 1, 1, -1, -1, -2, -2};
int dy[] = {0, 1, 0, -1, 0, 3, 0, -3, 1, -1, 2, -2, 2, -2, 1, -1};
int32_t main()
{
	freopen("visitfj.in" , "r" , stdin);freopen("visitfj.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n , t;
	cin >> n >> t;
	int a[n][n];
	int dis[n][n];
	bool vis[n][n];
	for(int i=0 ; i<n ; i++)
		for(int j=0 ; j<n ; j++)
			cin >> a[i][j] , dis[i][j] = inf , vis[i][j] = false;

	priority_queue<pair<int , pii > , vector<pair<int , pii>> , greater<pair<int , pii>>>pq;
	dis[0][0] = 0;
	pq.push({0,{0,0}});

	while(!pq.empty())
	{
		int x = pq.top().second.first;
		int y = pq.top().second.second;
		pq.pop();
		if(vis[x][y])continue;
		vis[x][y] = true;
		for(int i=0 ; i<16 ; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx<0 || nx>=n || ny<0 || ny>=n)continue;
			if(dis[x][y] + 3*t + a[nx][ny] < dis[nx][ny])
			{
				dis[nx][ny] = dis[x][y] + 3*t + a[nx][ny];
				pq.push({dis[nx][ny] , {nx , ny}});
			}
		}
		if(n-x-1 + n-y-1 <3)
		{
			dis[n-1][n-1] = min(dis[n-1][n-1] , dis[x][y] + (n-x-1 + n-y-1)*t);
		}

	}
	cout << dis[n-1][n-1] ;
}
