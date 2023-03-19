#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
#define endl '\n';
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
int dp[500005];
int32_t main()
{
	//freopen("file.in" , "r" , stdin);freopen("file.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	deque<pii>dq;
	int n , k;
	cin >> n >> k;
	int a[n];
	for(int i=0 ; i<n  ; i++)cin >> a[i];
	dp[0] = a[0];
	dq.push_back({a[0] , 0});
	for(int i=1 ; i<n ; i++)
	{
		while(!dq.empty() && i - dq.front().second>k)dq.pop_front();
		dp[i] = a[i] + dq.front().first; 
		while(!dq.empty() &&dq.back().first>dp[i])dq.pop_back();
		dq.push_back({dp[i] , i});
	}
	cout << dp[n-1];
}
