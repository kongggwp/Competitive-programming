#include<bits/stdc++.h>
using namespace std;
int dp[100000];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n;
	cin >> n;
	if(n<6){cout << "no"; return 0;}
	dp[6]=1;
	dp[9]=1;
	dp[20]=1;
	for(int i=6 ; i<=n ; i++)
	{
		dp[i+6]|=dp[i];
		dp[i+9]|=dp[i];
		dp[i+20]|=dp[i];
	}
	for(int i=6 ; i<=n ; i++)
	{
		if(dp[i])cout << i << '\n';
	}
}
