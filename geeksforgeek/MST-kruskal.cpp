//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    int par[1000] , size[1000];
	public:
	
	int findUpar(int node)
    	{
	        if(node==par[node])return node;
	        return findUpar(par[node]);
	    }
	    
	   void Union(int u , int v)
	    {
	        int pu = findUpar(u);
	        int pv = findUpar(v);
	        if(size[pu]>=size[pv])
	        {
	            par[pv] = pu;
	            size[pu]+=size[pv];
	        }
	        else
	        {
	            par[pu] = pv;
	            size[pv]+=size[pu];
	        }
	    }
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        
        for(int i=0 ; i<V; i++)par[i]=i , size[i]=1;
        
        vector<pair<int , pair<int,int>>>edges;
        
        for(int i=0 ; i<V ; i++)
        {
            for(auto it : adj[i])
            {
                int u = it[0];
                int v = i;
                int wt = it[1];
                edges.push_back({wt,{u,v}});
            }
        }
        sort(edges.begin() , edges.end());
        int mst=0;
        for(auto it : edges)
        {
            int u=it.second.first;
            int v=it.second.second;
            int wt=it.first;
            if(findUpar(u)!=findUpar(v))
            {
                mst+=wt;
                Union(u,v);
            }
        }
        return mst;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends
