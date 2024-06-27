#include <bits/stdc++.h>
using namespace std;
 
class BuildingRoads {
public:
    vector<int> visited;
    string solve(int n, vector<vector<int>> &adj) {
        visited = vector<int>(n + 1);
        vector<int> nodesToBeConnected;
        dfs(1, adj);
        for (int i = 2; i <= n; i++) {
            if (!visited[i]) {
                nodesToBeConnected.push_back(i);
                dfs(i, adj);
            }
        }
        // build the result: connect nodesToBeConnected to node 1
        string result = to_string(nodesToBeConnected.size()) + "\n";
        for (auto node: nodesToBeConnected)
            result += ("1 " + to_string(node) + "\n");
        return result;
    }
    void dfs(int node, vector<vector<int>> &adj) {
        if (visited[node]) return;
        visited[node] = 1;
        for (auto child: adj[node])
            dfs(child, adj);
    }
};
 
int main() {
    // read the input
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1); // adjacency list
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
    }
    // solve
    BuildingRoads solver;
    cout << solver.solve(n, adj);
 
    return 0;
}
