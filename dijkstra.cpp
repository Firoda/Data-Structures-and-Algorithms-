#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

typedef pair<int, int> iPair;


void addEdge(vector<iPair> adj[], int u, int v, int weight)
{
	adj[u].push_back(make_pair(v, weight));
	adj[v].push_back(make_pair(u, weight));
}


void dijkstra(vector<iPair> adj[], int V, int src)
{
	priority_queue<iPair, vector<iPair>, greater<iPair>> pq;
	
	vector<int> dist(V, INF);
	
	pq.push(make_pair(0, src));
	dist[src] = 0;
	
	while(!pq.empty())
	{
		int u = pq.top().second;
		pq.pop();
		for(auto x: adj[u])
		{
			int v = x.first;
			int weight = x.second;
			if(dist[v] > dist[u] + weight)
			{
				dist[v] = dist[u] + weight;
				pq.push(make_pair(dist[v], v));
			}
		}
	}
	
	for(int i=0;i<V;i++)
	{
		cout << i << " "<<dist[i]<<endl;
	}
}

int main()
{
	int V = 9;
	vector<iPair> adj[V];
	
	addEdge(adj, 0, 1, 4); 
    addEdge(adj, 0, 7, 8); 
    addEdge(adj, 1, 2, 8); 
    addEdge(adj, 1, 7, 11); 
    addEdge(adj, 2, 3, 7); 
    addEdge(adj, 2, 8, 2); 
    addEdge(adj, 2, 5, 4); 
    addEdge(adj, 3, 4, 9); 
    addEdge(adj, 3, 5, 14); 
    addEdge(adj, 4, 5, 10); 
    addEdge(adj, 5, 6, 2); 
    addEdge(adj, 6, 7, 1); 
    addEdge(adj, 6, 8, 6); 
    addEdge(adj, 7, 8, 7); 
    
    dijkstra(adj, V, 0);
}
