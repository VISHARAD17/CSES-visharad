#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h> 
using namespace std;

typedef long long ll;
typedef long double ld;
const ll MOD = 1e9+7;
#define all(x) (x).begin(), (x).end()

void dfs(vector<string> &a, vector<vector<bool>> &vis, int i, int j){
    const int n = a.size();
    const int m = a[0].size();

    if(vis[i][j] == true) return;  // if already visited then go back
    if(a[i][j] == '#') return; // if its a wall then go back
    
    vis[i][j] = true;

    // go up, down, left, right for dfs
    if(i-1>=0) dfs(a, vis, i-1, j); // up
    if(i+1<n) dfs(a, vis, i+1, j); // down
    if(j+1<m) dfs(a, vis, i, j+1); // right
    if(j-1>=0) dfs(a, vis, i, j-1); // left

    return;

}

void solve(){
    //code
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for(auto &x: a) cin >> x;
    
    // cout rooms
    int ans = 0;
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == '.' and vis[i][j] == false){
                ans++;
                dfs(a, vis, i, j);
            }
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
