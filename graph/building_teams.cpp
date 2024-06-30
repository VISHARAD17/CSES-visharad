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
bool possible;


void bfs(vector<vector<int>> &g, int i, vector<bool> &vis, vector<int> &team){
    if(vis[i]) return; // go back if already visited

    queue<int>q;
    q.push(i);

    while(!q.empty()){
        int u = q.front();
        q.pop();
        if(team[u] == 0) team[u] = 1;
        vis[u] = true;
        // cout << "u = " << u << "\n";
        for(auto &v: g[u]){
            if(!vis[v]){
                // cout << v << " ";
                vis[v] = true;
                q.push(v);
                if(team[u] == 1) team[v] = 2;
                else team[v] = 1;
            }
            else {
                // if already visited and both of them are in same team then false
                if(team[v] == team[u]){
                    possible = false;
                    return;
                }
            }
        }
        // cout << "\n ----- \n";
    }
    return;
}

void solve(){
    //code
    int n, m, a, b;
    cin >> n >> m;
    possible = true;
    vector<vector<int>> g(n+1);
    while(m--){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int>team(n+1); 
    vector<bool>vis(n+1, false);
    
    for(int i=1; i<=n; i++){
        if(!vis[i]) bfs(g, i, vis, team);
    }
    if(!possible) cout << "IMPOSSIBLE"; 
    else for(int i=1; i<=n; i++) cout << team[i] << " ";
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t = 1;
    while(t--) solve();
    return 0;
}
