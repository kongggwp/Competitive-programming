#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
#define endl '\n';
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
int dp[105][10005];
int grid[105][10005];
int32_t main()
{
	//freopen("file.in" , "r" , stdin);freopen("file.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n , m , k;
	cin >> n >> m >> k;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<m ; j++)
		{
			cin >> grid[i][j];
			if(!i)dp[i][j] = grid[i][j];
		}
	}
	deque<pii>dq;
	for(int i=1 ; i<n ; i++)
	{
		for(int j=0 ; j<k ; j++)
		{
			while(!dq.empty() && dq.back().first <= dp[i-1][j])dq.pop_back();
			dq.push_back({dp[i-1][j] , j});
		}
		for(int s=0 ; s<m ; s++)
		{
			while(!dq.empty() && dq.front().second < s-k )dq.pop_front();
			while(!dq.empty() && dq.back().first < dp[i-1][s+k])dq.pop_back();
			if(s+k<m)
			dq.push_back({dp[i-1][s+k] , s+k});
			dp[i][s] = grid[i][s] + dq.front().first;
		}
		while(!dq.empty())dq.pop_front();
	}
	int ans = 0;
	for(int j=0 ; j<m ; j++)
	{
		ans = max(ans , dp[n-1][j]);
	}
	cout << ans;
}
