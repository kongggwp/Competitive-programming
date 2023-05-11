#include<bits/stdc++.h>
using namespace std;
int n , dp[5005][5005] , a[5005] , ans[5005];
int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n;
	for(int i=1 ; i<=n ; i++)cin >> a[i] , dp[i][i] = a[i];
	for(int i=n ; i>=1 ; i--)for(int j=i ; j<=n ; j++)dp[i][j] = max(dp[i+1][j] + a[i],dp[i][j-1] + a[j]) + abs(a[i] - a[j]);//dp[i][j] = best value of cutting Sai-ua at head or tail in range[i,j] without any separation at first
	for (int i = 1; i <= n; i++) //
	{
		ans[i] = dp[1][i]; // ans[i] =  best value of cutting Sai-ua in range[1,i];
		for (int j = 1; j < i; j++)ans[i] = max(ans[i] , ans[j] + dp[j+1][i]); //cut at pos between j , j+1 then find max in that range;
	}
	cout << ans[n];
}
