#include<iostream>
#include<list>
using namespace std;

class Graph{
	int V;
	list<int> *adj;
	public:
		void addEdge(int v, int w);
		Graph(int V);
		void DFS(int s);

};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}


void Graph::DFS(int s)
{
	
	
}
