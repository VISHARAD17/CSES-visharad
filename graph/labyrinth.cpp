#include <algorithm>
#include <assert.h>
#include <iostream>
#include <math.h>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <utility>
#include <vector>
using namespace std;

typedef long long ll;
typedef long double ld;
const ll MOD = 1e9 + 7;
#define all(x) (x).begin(), (x).end()
vector<string> str;

bool is_valid(int i, int j, int n, int m, vector<string>a, vector<vector<bool>> vis){
    if(i>=0 and i<n and j>=0 and j<m and a[i][j] != '#' and vis[i][j] == false) return true;
    return false;
}

string backtrack(ll x, ll y, vector<vector<char>> step)

{
    string ans;
    if (step[x][y] != 'X') {
        char ch = step[x][y];
        ans += ch;
        // Move one cell up
        if (ch == 'U')
            backtrack(x + 1, y, step);
        // Move one cell down
        else if (ch == 'D')
            backtrack(x - 1, y, step);
        // Move one cell left
        else if (ch == 'L')
            backtrack(x, y + 1, step);
        // Move one cell right
        else if (ch == 'R')
            backtrack(x, y - 1, step);
    }
    return ans;
}
void shortest_path(pair<int, int> start, pair<int, int> end, vector<string> a){
    const int n = a.size();
    const int m = a[0].size();

    vector<vector<bool>> vis(n, vector<bool>(m, false));
    vector<vector<char>> step(n, vector<char>(m, 'X'));

    queue<pair<int, int>> q;
    q.push(start);
    string ans;
    bool path_found = false;

    while(!q.empty()){
        pair<int, int> u = q.front();
        int i = u.first;
        int j = u.second;
        q.pop();
        vis[i][j] = true;

        if(a[i][j] == 'B'){
            path_found = true;
            break;
        }

        // go to neighbours
        // up
        if(is_valid(i-1, j, n, m, a, vis)){
            vis[i-1][j] = true;
            step[i][j] = 'U';
            q.push(make_pair(i-1, j));
        }
        // down
        if(is_valid(i+1, j, n, m, a, vis)){
            vis[i+1][j] = true;
            step[i+1][j] = 'D';
            q.push(make_pair(i+1, j));
        }
        // left
        if(is_valid(i, j-1, n, m, a, vis)){
            vis[i][j-1] = true;
            step[i][j-1] = 'L';
            q.push(make_pair(i, j-1));
        }
        if(is_valid(i, j+1, n, m, a, vis)){
            vis[i][j+1] = true;
            step[i][j+1] = 'R';
            q.push(make_pair(i, j+1));
        }
    }

    if(path_found){
        ans = backtrack(start.first, start.second, step);
        reverse(ans.begin(), ans.end());
        cout << "YES\n" << ans.size() << "\n" << ans << "\n";
    }
    else cout << "NO\n";
}

void solve() {
    // code
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for(auto &x: a) cin >> x;
    
    pair<int, int> start, end;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == 'A') start = make_pair(i,j);
            else if(a[i][j] == 'B') end = make_pair(i, j);
        }
    }
    shortest_path(start, end, a);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll t = 1;
  while (t--)
    solve();
  return 0;
}
