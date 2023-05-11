#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int main()
{
	int n;
	cin >> n;
	char a[n];
	for(int i=0 ; i<n ; i++)cin >> a[i];
	for(int i=n-1 ; i>=0 ; i--)
	{
		for(int j=i ; j<n ; j++)
		{
			if(i==j)continue;
			if(a[i]==a[j])dp[i][j] = dp[i+1][j-1] + 1;
			else
			for(int k=i  ; k<j ; k++)
			{
				dp[i][j] = max({dp[i][j] , dp[i][k] + dp[k+1][j]});
			}
		}
	}
	cout << dp[0][n-1];
}
