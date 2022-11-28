#include <bits/stdc++.h>
using namespace std;
int main(){
    int v , e , q;
    cin >> v >> e >> q;

    vector<pair<int,int>>adj[v+1];
    while(e--)
    {
        int n1 , n2 , t;
        cin >> n1 >> n2 >> t;
        adj[n1].push_back({n2,t});
        adj[n2].push_back({n1,t});
    }
    vector<int>ans;
    int x;
    for(int i=0 ; i<q ; i++)
    {
        cin >> x;
        ans.push_back(x);
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>dist(v+1);
    for(int i=1 ; i<=v ; i++)dist[i]=1e9;
    dist[1]=0;
    pq.push({0,1});

    while (!pq.empty())
    {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for(auto it : adj[node])
        {
            int w =  it.second;
            int n =  it.first;
            if(dis + w < dist[n])
            {
                dist[n] = dis + w;
                pq.push({dist[n] , n});
            }
        }
    }

    for(int i=0 ; i<q ; i++)
    {
        if(dist[ans[i]]==1e9)cout << -1 << endl;
        else cout << dist[ans[i]] << endl;
    }
}
