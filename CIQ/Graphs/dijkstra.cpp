#include<iostream>
#include <stdio.h> 
#include <limits.h>
#define V 9
using namespace std;

int mindistance(bool splset[], int dist[])
{
	int mini = INT_MAX, min_index;
	for(int i=0;i<V;i++)
	{
		if(splset[i] == false && dist[i] <= mini)
			mini = dist[i], min_index = i;
	}
	return min_index;
}

void printsolution(int dist[])
{
	for(int i=0;i<V;i++)
	{
		cout<<i<<"\t\t"<<dist[i]<<"\n";
	}
}

void dijkstra(int graph[V][V], int src)
{
	bool splset[V];
	int dist[V];
	for(int i=0;i<V;i++)
	{
		dist[i]=INT_MAX;
		splset[i] = false;
	}
	
	dist[src] = 0;
	
	
	for(int count=0; count<V-1; count++)
	{
		
		
		int next = mindistance(splset,dist);
		splset[next] = true;
		for(int v=0; v<V; v++)
		{
			if(!splset[v] && graph[next][v] && dist[next]!=INT_MAX && dist[next]+graph[next][v]<dist[v])
				dist[v] = dist[next]+graph[next][v];
		}
		
	}
	printsolution(dist);
}

int main() 
{ 
  
   int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0}, 
                      {4, 0, 8, 0, 0, 0, 0, 11, 0}, 
                      {0, 8, 0, 7, 0, 4, 0, 0, 2}, 
                      {0, 0, 7, 0, 9, 14, 0, 0, 0}, 
                      {0, 0, 0, 9, 0, 10, 0, 0, 0}, 
                      {0, 0, 4, 14, 10, 0, 2, 0, 0}, 
                      {0, 0, 0, 0, 0, 2, 0, 1, 6}, 
                      {8, 11, 0, 0, 0, 0, 1, 0, 7}, 
                      {0, 0, 2, 0, 0, 0, 6, 7, 0} 
                     }; 
   
    dijkstra(graph, 0); 
   
    return 0; 
}
