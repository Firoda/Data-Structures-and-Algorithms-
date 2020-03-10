#include <bits/stdc++.h>
using namespace std;
bool dfsutil(vector<int> adj[], bool vis[], bool *rec, int s)
{
    if(!vis[s])
    {
        vis[s] = true;
        rec[s] = true;
        
        for(auto x:adj[s])
        {
            if(!vis[x] && dfsutil(adj, vis, rec, x))
                    return true;
            else if(rec[x])
                return true;
        }
    }
    rec[s] = false;
    return false;
}
bool isCyclic(int v, vector<int> adj[])
{
    // Your code here
    
    bool vis[v] = {false};
    bool recstack[v] = {false};
    
    for(int i=0;i<v;i++)
    {
        if(!vis[i])
            if(dfsutil(adj, vis, recstack, i))
                return true;
    }
    return false;
    
   
}

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int v, e;
	    cin >> v >> e;
	    
	    vector<int> adj[v];
	    
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	}
	
	return 0;
} 
