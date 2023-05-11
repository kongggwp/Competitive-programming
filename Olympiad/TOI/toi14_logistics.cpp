#include<bits/stdc++.h>
using namespace std;
#define pii pair<pair<int,int>,pair<int,int>>
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int N;
	cin >> N;
	int pi[N+1];
	for(int i=1 ; i<=N ; i++)cin >> pi[i];
	int S , D , F;
	cin >> S >> D >> F;
	int M;
	cin >> M;
	vector<pair<int,int>>g[N+1];
	while(M--)
	{
		int u , v , wt;
		cin >> u >> v >> wt;
		g[u].push_back({v,wt});
		g[v].push_back({u,wt});
 	}
   int cost[N+1][F+1][2];
   bool vis[N+1][F+1][2];
   for(int i=1 ; i<=N ; i++)
   		for(int j=0 ; j<=F ; j++)
		   for(int k=0 ; k<2 ; k++)
		   		cost[i][j][k] = INT_MAX , vis[i][j][k]=false;
				   
	priority_queue<pii , vector<pii> , greater<pii>>pq;
	cost[S][0][0] = 0;
	pq.push({{0,S},{0,0}}); //(cost,node) , (fuel,used)
	while(!pq.empty())
	{
		int node = pq.top().first.second;
		int fuel = pq.top().second.first;
		int used = pq.top().second.second;
		if(node==D && fuel==F)
		{
			cout << min(cost[D][F][0] , cost[D][F][1]);
			return 0;		}
		pq.pop();
		if(vis[node][fuel][used])continue;
		vis[node][fuel][used]=true;
		for(int i=fuel ; i<=F ; i++)
		{
			if(cost[node][fuel][used] + pi[node]*(i-fuel) < cost[node][i][used])
			{
				cost[node][i][used] = cost[node][fuel][used] + pi[node]*(i-fuel);
				pq.push({{cost[node][i][used] , node},{i , used}});
			}
		}
		if(!used)
		{
			if(cost[node][fuel][0] < cost[node][F][1])
			{
				cost[node][F][1] = cost[node][fuel][0];
				pq.push({{cost[node][F][1] , node},{F,1}});
			}
		}
		for(auto it : g[node])
		{
			int nn = it.first , w =it.second;
			for(int i=w; i<=F ; i++)
			{
				if(cost[node][i][used]<cost[nn][i-w][used])
				{
					cost[nn][i-w][used] = cost[node][i][used];
					pq.push({{cost[nn][i-w][used],nn},{i-w,used}});
				}
			}
		}	
	}
    return 0;
}
