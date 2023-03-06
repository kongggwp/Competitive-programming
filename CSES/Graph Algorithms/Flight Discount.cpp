#include<bits/stdc++.h>
using namespace std;
#define inf LLONG_MAX
#define int long long int
#define endl '\n'
bool vis[100005][2];
using pii = pair<int,int>;
using piii = pair<int,pair<int,int>>;
int32_t main()
{
        ios_base::sync_with_stdio(0);cin.tie(0);
        int N , E ;
        cin >> N >> E;
        vector<pii>G[N+1];
        while(E--)
        {
            int u , v , w;
            cin >> u >> v >> w;
            G[u].push_back({v,w});
        }
        priority_queue<piii , vector<piii> , greater<piii>>pq;
        int dist[N+1][2];
        for(int i=1 ; i<=N ; i++)dist[i][0] = dist[i][1] = inf;
        dist[1][0]=dist[1][1] = 0;
        pq.push({0 , {1 , 0}}); // {dis , {node , type}}
        pq.push({0 , {1 , 1}});
        while(!pq.empty())
        {
            int node = pq.top().second.first;
            int used = pq.top().second.second;
            pq.pop();
            if(vis[node][used])continue;
            vis[node][used] = true;
            for(auto it : G[node])
            {
                int nn = it.first;
                int cost = it.second;
                if(!used)
                {
                    if(dist[node][0] + cost/2 < dist[nn][1])
                    {
                        dist[nn][1] = dist[node][0] + cost/2;
                        pq.push({dist[nn][1] , {nn , 1}});
                    }
                }
                    if(dist[node][used] + cost < dist[nn][used])
                    {
                        dist[nn][used] = dist[node][used] + cost;
                        pq.push({dist[nn][used] , {nn , used}});
                    }
            }
        }
        cout << min(dist[N][1] , dist[N][0]);
}
