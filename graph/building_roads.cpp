#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

typedef long long ll;
typedef long double ld;
const ll MOD = 1e9+7;
#define all(x) (x).begin(), (x).end()

void dfs(vector<vector<int>> &g, vector<int>&vis, int s){
    if(vis[s] == 1) return;
    vis[s] = 1;

    for(auto &v: g[s]){
        dfs(g, vis,v);
    }
}

void solve(){
    //code
    int n,m;
    cin >> n >>m;
    vector<vector<int>>g(n+1);
    vector<int>vis(n+1, 0);
    vector<int>start;
    while(m--){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    for(int i=1; i<=n; i++){
        if(vis[i] == 0){
            start.push_back(i);
            dfs(g, vis, i);
        }
    }
    const int size = start.size();
    cout << size-1 << "\n";
    // for(auto &x: start) cout << x << " ";
    // cout << "\n";
    for(int i=1; i<size; i++) cout << start[0] << " " << start[i] << "\n";
    return;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t=1;
    while(t--) solve();
    return 0;
}
