#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h> 
using namespace std;

typedef long long ll;
typedef long double ld;
const ll MOD = 1e9+7;
#define all(x) (x).begin(), (x).end()

void solve_improved(){
    //code
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n+1);
    while(m--){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<bool>vis(n+1, false);
    
    // do bfs
    queue<int>q;
    q.push(1);
    vector<int>path(n+1);
    path[1] = -1;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        vis[u] = true;

        if(u == n) break;

        for(int v: g[u]){
            // if not visited
            if(!vis[v]){
                vis[v] = true;
                path[v] = u;
                q.push(v);
            }
        }
    }

    if(!vis[n]) cout << "IMPOSSIBLE\n";
    else{
        vector<int>ans;
        ans.push_back(n);
        int k = n;
        while(path[k] != -1){
            ans.push_back(path[k]);
            k = path[k];
        }
        reverse(all(ans));
        cout << ans.size() << "\n";
        for(auto &x: ans) cout << x << " ";
        cout << "\n";
    }


}
void solve_(){
    //code
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n+1);
    while(m--){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<bool>vis(n+1, false);
    
    // do bfs
    queue<int>q;
    q.push(1);
    vector<vector<int>>path(n+1);

    while(!q.empty()){
        int u = q.front();
        q.pop();
        vis[u] = true;

        for(int v: g[u]){
            // if not visited
            if(!vis[v]){
                vis[v] = true;
                path[v] = path[u];
                path[v].push_back(u);
                q.push(v);
            }
        }
    }

    if(!vis[n]) cout << "IMPOSSIBLE\n";
    else{
        cout << path[n].size()+1 << "\n";
        for(auto &x: path[n]) cout << x << " ";
        cout << n << "\n";
    }


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve_improved();
    return 0;
}
