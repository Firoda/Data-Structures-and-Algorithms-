#include<bits/stdc++.h>
using namespace std;

class Graph{
	int V;
	list<int> *adj;
	bool isCyclicUtil(int v, bool visited[], bool recStack[]);
	public:
		Graph(int v);
		void addEdge(int u, int v);
		bool isCycle();
};

Graph :: Graph(int v)
{
	this->V = v;
	adj = new list<int>[V];
}
void Graph :: addEdge(int u, int v)
{
	adj[u].push_back(v);
	// adj[v].push_back(u);
}

bool Graph :: isCyclicUtil(int v, bool visited[], bool recStack[])
{
	if(visited[v] == false)
	{
		visited[v] = true;
		recStack[v] = true;
 		
 		list<int> :: iterator it;
 		for(it = adj[v].begin(); it!= adj[v].end(); it++)
 		{
 			if(!visited[*it] && isCyclicUtil(*it, visited, recStack))
 				return true;
 			else if(recStack[*it])
 				return true;
		 }
	}
	recStack[v] = false;
	return false;
}

bool Graph :: isCycle()
{
	bool *visited = new bool[V+1];
	bool *recStack = new bool[V+1];
	
	for(int i=0;i<V+1;i++)
	{
		visited[i] = false;
		recStack[i] = false;
	}
	
	for(int i=0;i<V;i++)
	{
		if(isCyclicUtil(i, visited, recStack))
			return true;
	}
	return false;
}


int main()
{
	Graph g(4);
	
	g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    
    
     if(g.isCycle())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
    return 0;
}
