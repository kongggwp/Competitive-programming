#include<bits/stdc++.h>
using namespace std;
int dp[505][505] , cnt[505][505] , price[505] , n , m , t;
int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n >> m >> t;
	for(int i=0 ; i<n ; i++)cin >> price[i];
	for(int i=0 ; i<n ; i++)for(int j=0 ; j<n ; j++)dp[i][j]=price[i] + price[j],cnt[i][j]=2;
	while(m--){int u,v,w;cin>>u>>v>>w;--u;--v;dp[u][v]=dp[v][u]=w;} 
	for(int k=0 ; k<n ; k++)for(int i=0 ; i<n ; i++)for(int j=0 ; j<n ; j++){
		if(dp[i][k]+dp[k][j]<dp[i][j]){dp[i][j]=min(dp[i][j] , dp[i][k]+dp[k][j]);cnt[i][j]=cnt[i][k]+cnt[k][j];}
		else if(dp[i][k]+dp[k][j]==dp[i][j]){cnt[i][j]=max(cnt[i][j],cnt[i][k]+cnt[k][j]);}}
	while(t--){int x,y;cin>>x>>y;cout<<dp[x-1][y-1]<<' '<<cnt[x-1][y-1]<<endl;}
}
