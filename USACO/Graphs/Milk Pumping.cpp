#include<bits/stdc++.h>
using namespace std;
using piii=pair<int,pair<int,int>>;
using pii=pair<int,int>;
int N , E;
#define inf 1e9
int dij(vector<piii>G[] , int minflow)
{
    int dist[1005];
    int vis[1005];
    for(int i=0 ; i<=1005 ; i++)dist[i]=inf , vis[i]=0;
    priority_queue<pii , vector<pii> , greater<pii>>pq;
    pq.push({0,1}); // cost , node
    dist[1] = 0;
    while(!pq.empty())
    {
        int node = pq.top().second;
        pq.pop();
        if(vis[node])continue;
        vis[node] = 1;
        for(auto it : G[node])
        {
            int nn = it.first;
            int cost = it.second.first;
            int flow = it.second.second;
            if(flow < minflow)continue;
            if(dist[node] + cost < dist[nn])
            {
                dist[nn] = dist[node] + cost;
                pq.push({dist[nn] , nn});
            }
        }
    }
    return dist[N];
}
int main()
{
    freopen("pump.in" , "r" , stdin);
    freopen("pump.out" , "w" , stdout);
    cin >> N >> E ;
    vector<piii>G[N+1];
    vector<int>flow;
    while(E--)
    {
        int u,v,c,f;
        cin >> u >> v >> c >> f;
        flow.push_back(f);
        G[u].push_back({v , {c , f}});
        G[v].push_back({u , {c , f}});
    }
    double ans = 0;

        for(auto f : flow){
            {
                if(dij(G , f)!=1e9)
                {
                    double ratio = double(f)/double(dij(G , f));
                    ans = max(ans , ratio);
                }
            }
    }
    cout << (int)(ans*1e6);
}
