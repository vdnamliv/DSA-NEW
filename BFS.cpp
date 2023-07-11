#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void BFS(vector<vector<int>>& graph, int start) {
    int V = graph.size();
    vector<bool> visited(V, false); 
    queue<int> q; 

    visited[start] = true; 
    q.push(start); 

    while (!q.empty()) {
        int vertex = q.front(); 
        q.pop();
        cout << vertex << " "; 

       
        for (int i = 0; i < graph[vertex].size(); ++i) {
            int adjacentVertex = graph[vertex][i];
            if (!visited[adjacentVertex]) {
                visited[adjacentVertex] = true; 
                q.push(adjacentVertex); 
            }
        }
    }
}

int main() {
    int V = 6; 
    vector<vector<int>> graph(V); 

   
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(3);
    graph[2].push_back(4);
    graph[3].push_back(4);
    graph[3].push_back(5);

    cout << "Duyệt theo BFS (từ đỉnh 0): ";
    BFS(graph, 0);

    return 0;
}