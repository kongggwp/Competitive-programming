#include<bits/stdc++.h>
using namespace std;
const int N=2501;
int par[N] , sz[N];
typedef struct
{
    int wt,u,v;
}edges;
bool cmp(edges&erb1 , edges&erb2)
{
    return erb1.wt > erb2.wt;
}
int findUpar(int node)
{
    if(node==par[node])return node;
    return par[node] = findUpar(par[node]);
}
void Union(int u , int v)
{
    int pu = findUpar(u);
    int pv = findUpar(v);
    if(sz[pu]>=sz[pv])
    {
        par[pv] = pu;
        sz[pu]+=sz[pv];
    }
    else
    {
        par[pu] = pv;
        sz[pv]+=sz[pu];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int V,E;
    cin >> V >> E;
    vector<edges>erb;
    for(int i=0 ; i<E ; i++)
    {
        int u,v,wt;
        cin >> u >> v >> wt;
        erb.push_back({wt,u,v});
    }
    sort(erb.begin() , erb.end() , cmp);
    int s,d,p;
    cin >> s >> d >> p;
    for(int i=1 ; i<V ; i++)par[i]=i , sz[i]=1;
    for(auto it : erb)
    {
        int u = it.u;
        int v = it.v;
        int wt = it.wt;
        if(findUpar(u)!=findUpar(v))
        {
            Union(u,v);
        }
        if(findUpar(s)==findUpar(d))
        {
            if(p%(wt-1)==0)cout << p/(wt-1) ;
            else cout << p/(wt-1)+1 ;
            return 0;
        }
    }
}
