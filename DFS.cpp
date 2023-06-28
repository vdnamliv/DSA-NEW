#include <iostream>
#include <vector>
using namespace std;

void DFS(vector<vector<int>>& graph, vector<bool>& visited, int start)
{
    visited[start] = true;
    cout << start << " "; 

    for (int i = 0; i < graph[start].size(); i++)
    {
        int next = graph[start][i];
        if (!visited[next])
        {
            DFS(graph, visited, next); 
        }
    }
}

int main()
{
    int V = 5; 
    vector<vector<int>> graph(V);

    graph[0] = {1, 2};
    graph[1] = {0, 2, 3, 4};
    graph[2] = {0, 1};
    graph[3] = {1};
    graph[4] = {1};

    vector<bool> visited(V, false);

    cout << "DFS traversal: ";
    DFS(graph, visited, 0); 

    return 0;
}