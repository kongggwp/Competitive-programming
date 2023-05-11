#include<bits/stdc++.h>
using namespace std;
int dp[255][255][3];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	for(int i=0 ; i<20 ; i++)
	{
		int n ;string s;
		cin >> n >> s;
		memset(dp , 0 , sizeof(dp));
		for(int i=n-1 ; i>=0 ; i--)
			for(int j=i ; j<=n ; j++)
				if(i==j)dp[i][j][s[i]-'0'] = 1;
				else
					for(int k=i ; k<j ; k++)
					{
						dp[i][j][0] |=  dp[i][k][0]&dp[k+1][j][2];
						dp[i][j][1] |=	dp[i][k][0]&dp[k+1][j][1];
						dp[i][j][1] |=	dp[i][k][1]&dp[k+1][j][1];
						dp[i][j][1] |=	dp[i][k][1]&dp[k+1][j][2];
						dp[i][j][1] |=	dp[i][k][2]&dp[k+1][j][0];
						dp[i][j][1] |=	dp[i][k][2]&dp[k+1][j][2];
						dp[i][j][2] |=	dp[i][k][0]&dp[k+1][j][0];
						dp[i][j][2] |=	dp[i][k][1]&dp[k+1][j][0];
						dp[i][j][2] |=	dp[i][k][2]&dp[k+1][j][1];
					}
	     dp[0][n-1][0] ? cout << "yes" << '\n' : cout << "no" << '\n';
	}
}
