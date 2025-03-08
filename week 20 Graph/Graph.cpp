#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph {
public:
// first int -> u
//second int -> v
// third int -> wt
    unordered_map<int, list<pair <int, int>> adjList;

    // Add edge to the graph
    void addEdge(int u, int v, int weight, bool direction) {
        if (direction == 0) {
            // undirected graph
            // directed graph
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        } else {
            // directed graph
            adjList[u].push_back(v);
        }
    }

    // Function to print the adjacency list
    void printAdjList() {
        for (auto i : adjList) {
            cout << i.first << ": {";
            for (auto j : i.second) {
                cout << j << ",";
            }
            cout << "}" << endl;
        }
    }
};

int main() {
    Graph g;
    g.addEdge(0, 1, 1);
    g.addEdge(0, 2, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(2, 3, 1);
    g.printAdjList();

    return 0;
}
